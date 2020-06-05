//
// Created by kangdonguk on 2020/06/05.
//

// https://www.acmicpc.net/problem/10804
// 카드 역배치

#include <stdio.h>

int main() {
    int a[21], t = 10, x, y, i;
    for (i = 1; i <= 20; i++)
        a[i] = i;

    while (t--) {
        scanf("%d %d", &x, &y);
        while (x < y)
            a[x++] ^= a[y--] ^= a[x] ^= a[y];
    }

    for (i = 1; i <= 20; i++)
        printf("%d ", a[i]);
}