// https://www.acmicpc.net/problem/1225
// 이상한 곱셈

#include <cstdio>

int main() {
    char a[10001], b[10001];
    scanf("%s %s", a, b);
    long long int as = 0, bs = 0;
    for (int i = 0; a[i]; i++)
        as += (a[i] - '0');

    for (int i = 0; b[i]; i++)
        bs += (b[i] - '0');

    printf("%lld", as * bs);
}