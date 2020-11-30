// https://www.acmicpc.net/problem/2553
// 마지막 팩토리얼 수

#include <cstdio>

int main() {
    long long n, i = 1, p = 1;
    scanf("%lld", &n);
    for (; i <= n; i++) {
        p *= i;
        while (p % 10 == 0)
            p /= 10;
        p %= 1000000;
    }

    printf("%lld", p % 10);
}
