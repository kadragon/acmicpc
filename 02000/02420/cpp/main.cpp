// https://www.acmicpc.net/problem/2420
// 사파리월드

#include <cstdio>

int main() {
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    a = a - b;
    printf("%lld", a > 0 ? a : -a);
}
