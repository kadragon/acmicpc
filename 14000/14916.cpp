// https://www.acmicpc.net/problem/14916
// 거스름돈

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n < 5 and n % 2 ? -1 : n % 5 % 2 ? n / 5 - 1 + (n % 5 + 5) / 2 : n / 5 + n % 5 / 2);
}
