//
// Created by kangdonguk on 2020/04/21.
//

// https://www.acmicpc.net/problem/2747
// 피보나치

#include <stdio.h>

long long fibo[46] = {0, 1, 1};

long long f(int n) {
    if (fibo[n])
        return fibo[n];

    return fibo[n] = f(n - 2) + f(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%lld", f(n));
}
