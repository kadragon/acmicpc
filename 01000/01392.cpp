//
// Created by kangdonguk on 2020/05/24.
//

// https://www.acmicpc.net/problem/1392
// 노래 악보

#include <stdio.h>

int a[101], n, q, t;

int main() {
    scanf("%d %d", &n, &q);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &t);
        a[i] = a[i - 1] + t;
    }

    while (q--) {
        scanf("%d", &t);
        for (int i = 1; i <= n; i++)
            if (t < a[i]) {
                printf("%d\n", i);
                break;
            }
    }
}
