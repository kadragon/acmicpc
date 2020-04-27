//
// Created by kangdonguk on 2020/04/27.
//

// https://www.acmicpc.net/problem/2178
// 미로 탐색

#include <cstdio>

int a[102][102], n, m, b[102][102];
int d[][2] = {{1,  0},
              {0,  1},
              {-1, 0},
              {0,  -1}};

void f(int x, int y, int c) {
    if (b[x][y] and b[x][y] <= c)
        return;

    if (b[n][m] and b[n][m] <= c)
        return;

    int nx, ny;
    b[x][y] = c;
    for (int i = 0; i < 4; i++) {
        nx = x + d[i][0];
        ny = y + d[i][1];
        if (a[nx][ny] == 1)
            f(nx, ny, c + 1);
    }
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%1d", &a[i][j]);

    f(1, 1, 2);

    printf("%d", b[n][m] - 1);
}