// https://www.acmicpc.net/problem/16495
// 열 순서

#include <cstdio>

int main() {
    char s[11];
    long long n = 0;
    scanf("%s", s);

    for (int i = 0; s[i]; i++)
        n = n * 26 + s[i] - 'A' + 1;

    printf("%lld", n);
}