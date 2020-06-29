//
// Created by kangdonguk on 2020/06/29.
//

// https://www.acmicpc.net/problem/5724
// 파인만

#include <stdio.h>

int main() {
    int n, a, k, i;
    while (true) {
        scanf("%d", &n);
        if (!n) break;

        for (i = 1, a = 0; i <= n; i++) {
            k = n - i + 1;
            a += k * k;
        }

        printf("%d\n", a);
    }
}