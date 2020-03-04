//
// Created by kangdonguk on 2020/02/27.
//

// https://www.acmicpc.net/problem/2439
// 별 찍기 - 2

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i=1; i<=a; i++) {
        for (int j=1; j<=a-i; j++)
            printf(" ");
        for (int j=1; j<=i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
