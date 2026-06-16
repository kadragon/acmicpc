// https://www.acmicpc.net/problem/14491
// 9진수

#include <cstdio>

int f(int n) {
    if (n == 0)
        return 0;
    return f(n / 9) * 10 + n % 9;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
}