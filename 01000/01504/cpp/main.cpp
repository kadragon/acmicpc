// https://www.acmicpc.net/problem/1504
// 특정한 최단 경로

#define INF 987654321

#include <cstdio>

int n, e, d[801][801];

void input() {
    scanf("%d %d", &n, &e);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            d[i][j] = i == j ? 0 : INF;

    int x, y, k;
    while (e--) {
        scanf("%d %d %d", &x, &y, &k);
        if (d[x][y] > k or !d[x][y])
            d[x][y] = d[y][x] = k;
    }
}

void solve() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (i == j)
                    continue;

                if (d[i][k] and d[k][j]) {
                    if (!d[i][j] or d[i][j] > d[i][k] + d[k][j])
                        d[i][j] = d[i][k] + d[k][j];
                }
            }
}

void output() {
    int x, y, a, b;
    scanf("%d %d", &x, &y);

    a = d[1][x] + d[x][y] + d[y][n], b = d[1][y] + d[y][x] + d[x][n];

    a = a >= INF or a < 0 ? -1 : a;
    b = b >= INF or b < 0 ? -1 : b;

    printf("%d", a == -1 ? b : b == -1 ? a : a < b ? a : b);
}

int main() {
    input();
    solve();
    output();
}