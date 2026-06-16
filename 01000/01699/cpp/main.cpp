// https://www.acmicpc.net/problem/1699
// 제곱수의 합

#define MIN(a, b) ((a) < (b) ? (a) : (b));

#include <cstdio>

int n, d[100001], i, j;

int main() {
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        d[i] = i;

    for (i = 2; i <= n; i++) {
        for (j = 2; j * j <= i; j++)
            d[i] = MIN(d[i], d[i - j * j] + 1);
    }
    printf("%d", d[n]);
}