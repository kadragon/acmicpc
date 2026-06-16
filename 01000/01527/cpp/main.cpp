// https://www.acmicpc.net/problem/1527
// 금민수의 개수

#include <cstdio>

long long x, y, a;

void f(long long k) {
    if (k > y)
        return;

    if (x <= k)
        a++;

    f(k * 10 + 4);
    f(k * 10 + 7);
}

int main() {
    scanf("%lld %lld", &x, &y);
    f(0);
    printf("%lld", a);
}