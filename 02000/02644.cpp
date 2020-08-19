// https://www.acmicpc.net/problem/2644
// 촌수계산

#include <cstdio>
#include <queue>

int d[102][102], n, a, b, m;
bool visited[102];
std::queue<std::pair<int, int>> v;

void input() {
    scanf("%d %d %d %d", &n, &a, &b, &m);
    int x, y;
    while (m--) {
        scanf("%d %d", &x, &y);
        d[x][y] = 1, d[y][x] = 1;
    }
}

int solve() {
    visited[a] = 1;
    v.push({a, 0});

    while (!v.empty()) {
        int now = v.front().first, k = v.front().second;
        if (now == b)
            return k;
        v.pop();

        for (int i = 1; i <= n; i++) {
            if (!visited[i] and d[now][i]) {
                v.push({i, k + 1});
                visited[i] = 1;
            }
        }
    }

    return -1;
}

int main() {
    input();
    printf("%d", solve());
}
