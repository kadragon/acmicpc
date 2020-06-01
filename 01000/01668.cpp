//
// Created by kangdonguk on 2020/06/01.
//

// https://www.acmicpc.net/problem/1668
// 트로피 진열

#include <stdio.h>

int main() {
    int n, a[51], x = 0, y = 1, i, p;
    scanf("%d", &n);

    for (i = 1, p = 0; i <= n; i++) {
        scanf("%d", a + i);
        if (a[i] > a[p]) x++, p = i;
    }

    for (i = n - 1, p = n; i > 0; i--)
        if (a[p] < a[i]) y++, p = i;

    printf("%d %d", x, y);
}