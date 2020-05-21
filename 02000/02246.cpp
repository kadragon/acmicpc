//
// Created by kangdonguk on 2020/05/17.
//

// https://www.acmicpc.net/problem/2246
// 콘도 선정

#include <stdio.h>

int d[10001], c[10001], t, a, q, i, j;

int main() {
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
        scanf("%d %d", d + i, c + i);

    for (i = 1; i <= t; i++) {
        for (j = 1, q = 0; j <= t and !q; j++) {
            if (i == j) continue;
            if (d[i] > d[j] and c[i] >= c[j]) q = 1;
            if (c[i] > c[j] and d[i] >= d[j]) q = 1;
        }

        if (!q) a++;
    }

    printf("%d", a);
}