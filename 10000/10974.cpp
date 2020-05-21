//
// Created by kangdonguk on 2020/05/21.
//

// https://www.acmicpc.net/problem/10974
// 모든 순열

#include <stdio.h>

int n, u[9], a[9];

void f(int k) {
    if (k > n) {
        for (int i = 1; i <= n; i++)
            printf("%d ", a[i]);
        printf("\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (u[i]) continue;
        u[i] = 1, a[k] = i;
        f(k + 1);
        u[i] = 0;
    }
}

int main() {
    scanf("%d", &n);
    f(1);
}