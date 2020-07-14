// https://www.acmicpc.net/problem/1913
// 달팽이

#include <cstdio>

int a[1001][1001], n, p, x = 1, y = 1, k, ax, ay;
int d[][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
        a[i][0] = a[0][i] = a[i][n + 1] = a[n + 1][i] = -1;

    for (int i = n * n; i > 0; i--) {
        if (i == k)
            ax = x, ay = y;

        a[x][y] = i;
        if (a[x + d[p][0]][y + d[p][1]])
            p = (p + 1) % 4;

        x += d[p][0], y += d[p][1];
    }

    for (int i = 1; i <= n; i++, printf("\n")) {
        for (int j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
    }
    printf("%d %d", ax, ay);
}