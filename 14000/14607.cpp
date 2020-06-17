//
// Created by kangdonguk on 2020/06/17.
//

// https://www.acmicpc.net/problem/14607
// 피자 (Large)

#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%lld", (n - 1) * n / 2);
}