//
// Created by kangdonguk on 2020/05/21.
//

// https://www.acmicpc.net/problem/10813
// 공 바꾸기

#include <stdio.h>

int main() {
    int a[101], n, m, x, y, t;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
        a[i] = i;

    while (m--) {
        scanf("%d %d", &x, &y);
        t = a[x];
        a[x] = a[y];
        a[y] = t;
    }

    for (int i = 1; i <= n; i++)
        printf("%d ", a[i]);
}