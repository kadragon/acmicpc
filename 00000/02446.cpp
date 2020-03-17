//
// Created by kangdonguk on 2020/03/17.
//

// https://www.acmicpc.net/problem/2446
// 별 찍기 - 9

#include <stdio.h>

int main() {
    int n, reversed = 0;
    scanf("%d", &n);

    for (int i = n; i <= n; i = reversed == 0 ? i - 1 : i + 1) {
        for (int j = 0; j < n - i; j++)
            printf(" ");

        for (int j = 1; j < i * 2; j++)
            printf("*");

        if (i == 1)
            reversed = 1;

        if (!(i == n and reversed == 1))
            printf("\n");
    };
}
