// https://www.acmicpc.net/problem/11724
// 연결 요소의 개수

#include <cstdio>
#include <vector>

using namespace std;

vector<int> d[1001];
bool visited[1001];
int n, m, a, x, y, p;

void dfs(int k) {
    visited[k] = true;
    for (int i = 0; i < d[k].size(); i++) {
        p = d[k][i];
        if (!visited[p]) {
            dfs(p);
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    while (m--) {
        scanf("%d %d", &x, &y);
        d[x].push_back(y), d[y].push_back(x);
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i);
            a++;
        }
    }

    printf("%d", a);
}