//
// Created by kangdonguk on 2020/03/26.
//

// https://www.acmicpc.net/problem/2193
// 이친수

#include <stdio.h>

long long a[91][2];

long long c(int k, int p) {
    if (a[k][p])
        return a[k][p];

    if (k == 0)
        return a[k][p] = 1;

    if (p == 0)
        return a[k][p] = c(k - 1, 0) + c(k - 1, 1);
    else
        return a[k][p] = c(k - 1, 0);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", c(n - 1, 1));
}