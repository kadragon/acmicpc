// https://www.acmicpc.net/problem/16194
// 카드 구매하기 2

#include <stdio.h>

int main() {
    int a[10001], b[10001], n, t, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", a + i);
        b[i] = a[i];
    }

    for (i = 1; i <= n; i++)
        for (j = 1; j < i; j++) {
            t = a[i - j] + b[j];
            if (a[i] > t)
                a[i] = t;
        }

    printf("%d", a[n]);
}