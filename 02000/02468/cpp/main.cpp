//
// Created by kangdonguk on 2020/04/21.
//

// https://www.acmicpc.net/problem/2468
// 안전 영역

#include <stdio.h>
#include <algorithm>

int a[102][102], b[10001], c[102][102], n;
int d[4][2] = {{-1, 0},
               {1,  0},
               {0,  1},
               {0,  -1}};

void ch(int x, int y, int count) {
    c[x][y] = count;

    int nx, ny;
    for (int i = 0; i < 4; i++) {
        nx = d[i][0] + x;
        ny = d[i][1] + y;
        if (c[nx][ny] == 1) {
            c[nx][ny] = count;
            ch(nx, ny, count);
        }
    }
}

int count_p() {
    int p = 1;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (c[i][j] == 1)
                ch(i, j, ++p);

    return p - 1;
}

int main() {
    int ans = 1, t;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
            b[(i - 1) * n + j - 1] = a[i][j];
        }

    std::sort(b, b + n * n + 1);

    for (int i = 1; i < n * n; i++) {
        if (b[i - 1] != b[i]) {
            for (int x = 1; x <= n; x++)
                for (int y = 1; y <= n; y++)
                    c[x][y] = a[x][y] > b[i] ? 1 : 0;

            t = count_p();
            ans = ans > t ? ans : t;
        }
    }

    printf("%d", ans);
}