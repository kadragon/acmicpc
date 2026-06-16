//
// Created by kangdonguk on 2020/06/12.
//

// https://www.acmicpc.net/problem/1531
// 투명

#include <stdio.h>

int a[101][101], n, m, d, x1, y1, x2, y2, i, j;

int main() {
    scanf("%d %d", &n, &m);
    while (n-- and d < 10000) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (i = x1; i <= x2; i++)
            for (j = y1; j <= y2; j++) {
                if (a[i][j] > m) continue;
                a[i][j]++;
                if (a[i][j] > m) d++;
            }
    }
    printf("%d", d);
}