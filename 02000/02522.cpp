//
// Created by kangdonguk on 2020/03/28.
//

// https://www.acmicpc.net/problem/2522
// 별 찍기 - 12

#include <stdio.h>

int main() {
    int n, i, j, p = 0;
    scanf("%d", &n);

    for (i = 0; i >= 0; p == 0 ? i++ : i--) {
        for (j = 0; j < n - i - 1; j++)
            printf(" ");
        for (j = 0; j < i + 1; j++)
            printf("*");

        printf("\n");

        if (i == n - 1) p = 1;
    }
}