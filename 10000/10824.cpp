//
// Created by kangdonguk on 2020/06/10.
//

// https://www.acmicpc.net/problem/10824
// 네 수

#include <stdio.h>

long long f(long long n) {
    int l = 1;
    while (n)
        l *= 10, n /= 10;

    return l;
}

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    printf("%lld", a * f(b) + b + c * f(d) + d);
}
