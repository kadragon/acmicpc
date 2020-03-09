//
// Created by kangdonguk on 2020/03/08.
//

// https://www.acmicpc.net/problem/2748
// 피보나치 수 2

#include <stdio.h>

long long int a[91] = {0, 1, 1};

long long int fibo(int n) {
    if (n < 3 or a[n])
        return a[n];

    return a[n] = fibo(n-1) + fibo(n-2);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%lld", fibo(n));

    return 0;
}