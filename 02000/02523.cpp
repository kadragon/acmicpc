//
// Created by kangdonguk on 2020/03/16.
//

// https://www.acmicpc.net/problem/2523
// 별 찍기 - 13

#include <stdio.h>

int main() {
    int n, reverse = 0;
    scanf("%d", &n);

    for (int i = 1; i; i = reverse == 0 ? i+1 : i-1) {
        for (int j = 1; j <= i; j++) {
            printf("*");

            if (reverse == 1 and i == 1)
                continue;

            if (j == i)
                printf("\n");
        }

        if (i == n)
            reverse = 1;
    }
}
