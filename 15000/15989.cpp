//
// Created by kangdonguk on 2020/05/12.
//

// https://www.acmicpc.net/problem/15989
// 1, 2, 3 더하기 4

#include <stdio.h>

int a[10001][4];

int f(int n, int k) {
    if (a[n][k]) return a[n][k];
    if (n == 0) return 1;

    int p = 0;
    for (int i = k; i <= 3; i++)
        if (n - i >= 0)
            p += a[n - i][i] = f(n - i, i);

    return p;
}

int main() {
    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        printf("%d\n", f(n, 1));
    }
}