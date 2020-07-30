// https://www.acmicpc.net/problem/11404
// 플로이드

#include <cstdio>

int n, m, d[101][101];

void input() {
    scanf("%d %d", &n, &m);
    int x, y, k;
    while (m--) {
        scanf("%d %d %d", &x, &y, &k);
        if (!d[x][y] or d[x][y] > k)
            d[x][y] = k;
    }
}

void solve() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (i == j)
                    continue;
                if (d[i][k] and d[k][j])
                    if ((d[i][j] > d[i][k] + d[k][j]) or !d[i][j])
                        d[i][j] = d[i][k] + d[k][j];
            }
}

void output() {
    for (int i = 1; i <= n; i++, printf("\n"))
        for (int j = 1; j <= n; j++)
            printf("%d ", d[i][j]);
}

int main() {
    input();
    solve();
    output();
}
