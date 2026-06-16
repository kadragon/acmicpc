// https://www.acmicpc.net/problem/1240
// 노드사이의 거리

#include <cstdio>

int n, m, d[1001][1001];

void input() {
    scanf("%d %d", &n, &m);
    int x, y, z;
    for (int i = 1; i < n; i++) {
        scanf("%d %d %d", &x, &y, &z);
        d[x][y] = d[y][x] = z;
    }
}

void solve() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (i == j)
                    continue;
                if (d[i][k] and d[k][j])
                    if (!d[i][j] or d[i][k] + d[k][j] < d[i][j])
                        d[i][j] = d[i][k] + d[k][j];
            }
}

void output() {
    int x, y;
    while (m--) {
        scanf("%d %d", &x, &y);
        printf("%d\n", d[x][y]);
    }
}

int main() {
    input();
    solve();
    output();
}
