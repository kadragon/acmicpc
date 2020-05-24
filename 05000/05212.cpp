//
// Created by kangdonguk on 2020/05/17.
//

// https://www.acmicpc.net/problem/5212
// 지구 온난화

#include <stdio.h>

int main() {
    char s[10][11], a[10][11];
    int r, c, t = 0, x, y, ax = 10, ay = 10, bx = 0, by = 0;
    int d[4][2] = {{-1, 0},
                   {1,  0},
                   {0,  1},
                   {0,  -1}};

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
        scanf("%s", s[i]);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            t = 4;
            if (s[i][j] == 'X') {
                for (int k = 0; k < 4; k++) {
                    x = i + d[k][0], y = j + d[k][1];
                    if (x > -1 and x < r and y >= 0 and y < c and s[x][y] == 'X')
                        t--;
                }
            }
            a[i][j] = t > 2 ? '.' : 'X';
            if (t <= 2) {
                if (ax > i) ax = i;
                if (bx < i) bx = i;
                if (ay > j) ay = j;
                if (by < j) by = j;
            }

        }

    for (int i = ax; i <= bx; i++, printf("\n"))
        for (int j = ay; j <= by; j++)
            printf("%c", a[i][j]);
}