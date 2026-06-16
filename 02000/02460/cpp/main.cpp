//
// Created by kangdonguk on 2020/05/22.
//

// https://www.acmicpc.net/problem/2460
// 지능형 기차 2

#include <stdio.h>

int main() {
    int t = 10, m = 0, n = 0, a, b;

    while (t--) {
        scanf("%d %d", &a, &b);
        n = n - a + b;
        if (n > m) m = n;
    }

    printf("%d", m);
}