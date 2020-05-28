//
// Created by kangdonguk on 2020/05/28.
//

// https://www.acmicpc.net/problem/14716
// 현수막

#include <stdio.h>

int a[252][252], dx[] = {-1, 1, 0, 0, 1, 1, -1, -1}, dy[] = {0, 0, 1, -1, 1, -1, 1, -1}, nx, ny, m, n, t = 2;

void f(int x, int y, int p) {
    a[x][y] = p;
    for (int i = 0; i < 8; i++) {
        nx = x + dx[i], ny = y + dy[i];
        if (a[nx][ny] == 1)
            f(nx, ny, p);
    }
}

int main() {
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == 1)
                f(i, j, t++);

    printf("%d", t - 2);
}
