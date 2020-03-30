//
// Created by kangdonguk on 2020/03/30.
//

// https://www.acmicpc.net/problem/11052
// 카드 구매하기

#define max(a, b) ((a) > (b) ? (a) : (b))

#include <stdio.h>

int v[1001];
int a[1001][1001];

int f(int n, int k) {
    if (n == 0 || k == 0)
        return 0;

    if (n == 1)
        return v[n] * k;

    if (a[n][k])
        return a[n][k];

    for (int i = 0; k - n * i >= 0; i++)
        a[n][k] = max(a[n][k], f(n - 1, k - n * i) + v[n] * i);

    return a[n][k];
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &v[i]);

    printf("%d", f(n, n));
}