//
// Created by kangdonguk on 2020/05/18.
//

// https://www.acmicpc.net/problem/2636
// 치즈

#include <stdio.h>

int a[102][102], t, nx, ny, m, n, p, q;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void fill(int x, int y, int k) {
    if (a[x][y] != 1) {
        a[x][y] = k;
        for (int i = 0; i < 4; i++) {
            nx = x + dx[i], ny = y + dy[i];
            if (nx >= 0 and nx <= m and ny >= 0 and ny <= n)
                if (a[nx][ny] != k)
                    fill(x + dx[i], y + dy[i], k);
        }
    }
}

void clear(int p) {
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == 1)
                for (int k = 0; k < 4; k++) {
                    nx = i + dx[k], ny = j + dy[k];
                    if (a[nx][ny] == p) {
                        a[i][j] = 0, t--;
                        break;
                    }
                }
}

int main() {
    scanf("%d %d", &m, &n);

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 1) t++;
        }

    for (int i = 2; t > 0; i++) {
        q++, p = t;
        fill(0, 0, i);
        clear(i);
    }

    printf("%d\n%d", q, p);
}
