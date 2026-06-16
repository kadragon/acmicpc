//
// Created by kangdonguk on 2020/05/29.
//

// https://www.acmicpc.net/problem/1940
// 주몽

#include <stdio.h>

int a[200000], n, m, t, b;

int main() {
    scanf("%d %d", &n, &m);
    while (n-- && m < 200000) {
        scanf("%d", &t);
        if (m - t >= 0 and a[m - t])
            b++, a[m - t] = 0;
        else
            a[t] = 1;
    }

    printf("%d", b);
}
