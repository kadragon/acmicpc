//
// Created by kangdonguk on 2020/06/05.
//

// https://www.acmicpc.net/problem/16433
// 주디와 당근농장

#include <stdio.h>

int main() {
    int n, a, b, i, j;
    scanf("%d %d %d", &n, &a, &b);

    for (i = 1; i <= n; i++, printf("\n"))
        for (j = 1; j <= n; j++)
            printf("%c", (i + j) % 2 == (a + b) % 2 ? 'v' : '.');
}
