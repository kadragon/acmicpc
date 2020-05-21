//
// Created by kangdonguk on 2020/04/16.
//

// https://www.acmicpc.net/problem/17144
// 미세먼지 안녕!

#include <stdio.h>

int a[2][50][50], r, c, air;
int d[4][2] = {{-1, 0},
               {1,  0},
               {0,  1},
               {0,  -1}};

void diffusion() {
    int count, x, y, f;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (a[0][i][j] > 0) {
                f = a[0][i][j] / 5, count = 0;
                for (int k = 0; k < 4; k++) {
                    x = i + d[k][0], y = j + d[k][1];
                    if (x >= 0 and x < r and y >= 0 and y < c and a[0][x][y] != -1) {
                        a[1][x][y] += f;
                        count++;
                    }
                }
                a[1][i][j] += a[0][i][j] - f * count;
                a[0][i][j] = 0;
            }
}

void rotation() {
    int s[] = {air - 1, air};
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            if (a[1][i][j]) {
                if ((i == 0 or i == r - 1) and j != 0)
                    a[0][i][j - 1] = a[1][i][j];
                else if ((i == s[0] or i == s[1]) and j != c - 1)
                    a[0][i][j + 1] = a[1][i][j];
                else if ((i < s[0] and j == 0) or (i > s[0] and j == c - 1))
                    a[0][i + 1][j] = a[1][i][j];
                else if ((i > s[1] and j == 0) or (i <= s[0] and j == c - 1))
                    a[0][i - 1][j] = a[1][i][j];
                else
                    a[0][i][j] = a[1][i][j];

            }
            a[1][i][j] = 0;
        }
    a[0][s[0]][0] = a[0][s[1]][0] = -1;
}

int ans() {
    int w = 0;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            if (a[0][i][j] > 0)
                w += a[0][i][j];
        }
    return w;
}

int main() {
    int t;
    scanf("%d %d %d", &r, &c, &t);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[0][i][j]);
            if (a[0][i][j] == -1)
                air = i;
        }

    while (t--) {
        diffusion();
        rotation();
    }

    printf("%d", ans());
}
