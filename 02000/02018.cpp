//
// Created by kangdonguk on 2020/06/04.
//

// https://www.acmicpc.net/problem/2018
// 수들의 합 5

#include <stdio.h>

int main() {
    int n, a = 1, t;
    scanf("%d", &n);

    for (int i = 1;; i++) {
        t = (n - ((i + 1) * i) / 2);
        if (t <= 0) break;
        if (t % (i + 1) == 0)
            a++;
    }

    printf("%d", a);
}