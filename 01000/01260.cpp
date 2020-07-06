// https://www.acmicpc.net/problem/1260
// DFS와 BFS

#include <cstdio>
#include <deque>

using namespace std;

int d[1001][1001], visited[1001];
int n, m, v, x, y;

void dfs(int k) {
    printf("%d ", k);
    visited[k] = 1;
    for (int i = 1; i <= n; i++) {
        if (!visited[i] and d[k][i])
            dfs(i);
    }
}

void bfs(int k) {
    deque<int> dq;
    dq.push_back(k);
    visited[k] = 1;
    while (!dq.empty()) {
        printf("%d ", dq[0]);
        for (int i = 1; i <= n; i++) {
            if (!visited[i] and d[dq[0]][i]) {
                dq.push_back(i);
                visited[i] = 1;
            }
        }
        dq.pop_front();
    }
}

int main() {
    scanf("%d %d %d", &n, &m, &v);
    while (m--) {
        scanf("%d %d", &x, &y);
        d[x][y] = 1, d[y][x] = 1;
    }

    dfs(v);

    for (int i = 1; i <= n; i++)
        visited[i] = 0;
    printf("\n");

    bfs(v);
}