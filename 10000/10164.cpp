// https://www.acmicpc.net/problem/10164
// 격자상의 경로

#include <cstdio>

int a[16][16], n, m, k, x, y, i, j;

int main() {
    scanf("%d %d %d", &n, &m, &k);
    x = (k - 1) / m + 1;
    y = k - m * (x - 1);

    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            if (!((i > x && j < y) || (i < x && j > y)) || !k)
                a[i][j] = i == 1 || j == 1 ? 1 : a[i - 1][j] + a[i][j - 1];

    printf("%d", a[n][m]);
}
