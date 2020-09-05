// https://www.acmicpc.net/problem/1735
// 분수 합

#include <cstdio>

int gcd(int a, int b) {
    return a ? gcd(b % a, a) : b;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    a = a * d + b * c;
    b *= d;
    c = gcd(a, b);
    printf("%d %d", a / c, b / c);
}
