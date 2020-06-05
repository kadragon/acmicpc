//
// Created by kangdonguk on 2020/06/05.
//

// https://www.acmicpc.net/problem/16675
// 두 개의 손

#include <stdio.h>

int a[2][3], b[2][3], d[3][2] = {{0, 2},
                                 {0, 1},
                                 {1, 2}}, ans, i, j, k, p;

int main() {
    char x, y[] = "SRP", q[][3] = {"?", "MS", "TK"};
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++) {
            scanf("%c", &x);
            getchar();
            for (k = 0; k < 3; k++)
                if (x == y[k]) {
                    for (p = 0; p < 2; p++)
                        a[i][d[k][p]] = 1;
                    b[i][k] = 1;
                }
        }

    for (i = 0; i < 2 and !ans; i++)
        for (j = 0; j < 3 and !ans; j++)
            if (b[i][j] and !a[(i + 1) % 2][j])
                ans = i + 1;

    printf("%s", q[ans]);
}