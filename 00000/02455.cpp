//
// Created by kangdonguk on 2020/04/16.
//

// https://www.acmicpc.net/problem/2455
// 지능형 기차

#define max(a, b) ((a) > (b) ? (a) : (b))

#include <stdio.h>

int main() {
    int a, b, m = 0, n = 0, c = 4;

    while (c--) {
        scanf("%d %d", &a, &b);
        n -= a;
        n += b;
        m = max(m, n);
    }

    printf("%d", m);
}