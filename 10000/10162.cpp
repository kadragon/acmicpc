// https://www.acmicpc.net/problem/10162
// 전자레인지

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 10)
        printf("%d", -1);
    else
        printf("%d %d %d", n / 300, n % 300 / 60, n % 60 / 10);
}