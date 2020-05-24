//
// Created by kangdonguk on 2020/04/14.
//

// https://www.acmicpc.net/problem/1012
// 유기농 배추

#include <stdio.h>

int a[52][52], p[4][2] = {{-1, 0},
                          {1,  0},
                          {0,  1},
                          {0,  -1}};

void f(int x, int y, int ans) {
    a[x][y] = ans;
    for (int i = 0; i < 4; i++)
        if (a[x + p[i][0]][y + p[i][1]] == 1)
            f(x + p[i][0], y + p[i][1], ans);
}

int main() {
    int t, m, n, k, x, y, ans;
    scanf("%d", &t);

    while (t--) {
        ans = 1;
        scanf("%d %d %d", &m, &n, &k);

        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
                a[i][j] = 0;

        for (int i = 0; i < k; i++) {
            scanf("%d %d", &x, &y);
            a[x + 1][y + 1] = 1;
        }

        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
                if (a[i][j] == 1)
                    f(i, j, ++ans);

        printf("%d\n", ans - 1);
    }
}
