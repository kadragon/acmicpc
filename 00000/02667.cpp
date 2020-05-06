//
// Created by kangdonguk on 2020/05/06.
//

// https://www.acmicpc.net/problem/2667
// 단지번호붙이기

#include <cstdio>
#include <algorithm>

int a[27][27], ans[27 * 14];
int d[][2] = {{0,  1},
              {0,  -1},
              {1,  0},
              {-1, 0}};

int f(int x, int y, int t) {
    int c = 1, nx, ny;
    a[x][y] = t;

    for (int i = 0; i < 4; i++) {
        nx = x + d[i][0];
        ny = y + d[i][1];

        if (a[nx][ny] == 1)
            c += f(nx, ny, t);
    }

    return c;
}

int main() {
    int n, k = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%1d", &a[i][j]);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == 1)
                ans[k] = f(i, j, ++k);

    printf("%d\n", k - 1);

    std::sort(ans, ans + (k + 1));

    for (int i = 2; i <= k; i++)
        printf("%d\n", ans[i]);
}