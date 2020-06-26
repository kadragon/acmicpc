//
// Created by kangdonguk on 2020/06/26.
//

// https://www.acmicpc.net/problem/10990
// 별 찍기 - 15

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++, printf("\n")) {
        for (j = 0; j < n - i - 1; j++)
            printf("%c", ' ');
        printf("*");
        for (j = 0; j < i * 2 - 1; j++)
            printf("%c", ' ');
        if (i > 0)
            printf("*");
    }
}
