//
// Created by kangdonguk on 2020/03/26.
//

// https://www.acmicpc.net/problem/11727
// 2×n 타일링 2

#include <stdio.h>

int a[1001];

int c(int n) {
    if (n < 0)
        return 0;

    if (a[n])
        return a[n];

    if (n == 0)
        return 1;

    return a[n] = (c(n - 1) + 2 * c(n - 2)) % 10007;
}

int main() {
    int n;

    scanf("%d", &n);
    printf("%d", c(n));
}