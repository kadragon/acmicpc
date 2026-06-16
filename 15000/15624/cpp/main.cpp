//
// Created by kangdonguk on 2020/06/18.
//

// https://www.acmicpc.net/problem/15624
// 피보나치 수 7

#include <stdio.h>

int main() {
    int n, a[3] = {0, 1,}, i = 2;
    scanf("%d", &n);
    for (; i <= n; i++)
        a[i % 3] = (a[(i - 1) % 3] + a[(i - 2) % 3]) % 1000000007;

    printf("%d", a[n % 3]);
}