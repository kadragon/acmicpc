//
// Created by kangdonguk on 2020/06/10.
//

// https://www.acmicpc.net/problem/10811
// 바구니 뒤집기

#include <stdio.h>

int main() {
    int n, m, x, y, a[101], i;
    scanf("%d %d", &n, &m);

    for (i = 1; i <= n; i++)
        a[i] = i;

    while (m--) {
        scanf("%d %d", &x, &y);
        while (x < y)
            a[x++] ^= a[y--] ^= a[x] ^= a[y];
    }

    for (i = 1; i <= n; i++)
        printf("%d ", a[i]);
}
