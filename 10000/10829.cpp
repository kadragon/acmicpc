// https://www.acmicpc.net/problem/10829
// 이진수 변환

#include <cstdio>

void f(long long k) {
    if (k == 0)
        return;
    f(k / 2);
    printf("%lld", k % 2);
}

int main() {
    long long int a;
    scanf("%lld", &a);
    f(a);
}