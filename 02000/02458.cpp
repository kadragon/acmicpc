// https://www.acmicpc.net/problem/2458
// 키 순서

#include <cstdio>

#define INF 987654321

int n, m, d[501][501];

void input() {
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            d[i][j] = INF;

    int x, y;
    while (m--) {
        scanf("%d %d", &x, &y);
        d[x][y] = 1;
    }
}

void solve() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (i == j)
                    continue;
                if (d[i][k] and d[k][j]) {
                    if (d[i][j] > d[i][k] + d[k][j])
                        d[i][j] = d[i][k] + d[k][j];
                }
            }
}

void output() {
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        bool p = true;
        for (int j = 1; j <= n and p; j++) {
            if (i == j)
                continue;
            if (!(d[i][j] != INF or d[j][i] != INF))
                p = false;
        }
        if (p)
            ans++;
    }

    printf("%d", ans);
}

int main() {
    input();
    solve();
    output();
}