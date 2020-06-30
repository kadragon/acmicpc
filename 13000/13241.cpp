//
// Created by kangdonguk on 2020/06/30.
//

// https://www.acmicpc.net/problem/13241
// 최소공배수

#include <stdio.h>

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%lld", (long long) a / gcd(a, b) * b);
}