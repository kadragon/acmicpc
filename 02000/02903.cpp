// https://www.acmicpc.net/problem/2903
// 중앙 이동 알고리즘

#include <cstdio>
#include <math.h>

int main() {
    long long n;
    scanf("%lld", &n);
    n = (long long)pow(2, n) + 1;
    printf("%lld", n * n);
}