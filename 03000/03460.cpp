//
// Created by kangdonguk on 2020/06/06.
//

// https://www.acmicpc.net/problem/3460
// 이진수

#include <stdio.h>

int main() {
    int t, n, i;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        for (i = 0; n; i++, n /= 2)
            if (n % 2 == 1)
                printf("%d ", i);
        printf("\n");
    }
}