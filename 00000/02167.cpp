//
// Created by kangdonguk on 2020/04/03.
//

// https://www.acmicpc.net/problem/2167
// 2차원 배열의 합

#include <stdio.h>

int d[301][301];

int main() {
    int x, y, t, x1, y1, x2, y2;
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= x; i++)
        for (int j = 1; j <= y; j++) {
            scanf("%d", &d[i][j]);
            d[i][j] = d[i][j] + d[i - 1][j] + d[i][j - 1] - d[i - 1][j - 1];
        }

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        printf("%d\n", d[x2][y2] - d[x1 - 1][y2] - d[x2][y1 - 1] + d[x1 - 1][y1 - 1]);
    }
}