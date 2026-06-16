//
// Created by kangdonguk on 2020/06/28.
//

// https://www.acmicpc.net/problem/1233
// 주사위

#include <stdio.h>

int a, b, c, d[81], t, i, j, k;

int main() {
    scanf("%d %d %d", &a, &b, &c);
    for (i = 1; i <= a; i++)
        for (j = 1; j <= b; j++)
            for (k = 1; k <= c; k++)
                if (d[t] < ++d[i + j + k])
                    t = i + j + k;

    printf("%d", t);
}