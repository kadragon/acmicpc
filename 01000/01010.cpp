//
// Created by kangdonguk on 2020/03/30.
//

// https://www.acmicpc.net/problem/1010
// 다리 놓기

#include <stdio.h>

int a[31][31];

int f(int n, int m) {
    if (n == m)
        return 1;

    if (n > m || n < 0 || m < 0)
        return 0;

    if (a[n][m])
        return a[n][m];

    return a[n][m] = f(n, m-1) + f(n-1, m-1);
}

int main() {
    int n, m, k;
    scanf("%d", &k);

    for (int i = 0; i < k; i++) {
        scanf("%d %d", &n, &m);
        printf("%d\n", f(n, m));
    }
}