//
// Created by kangdonguk on 2020/04/17.
//

// https://www.acmicpc.net/problem/10991
// 별 찍기 - 16

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++, printf("\n")) {
        for (int j = n - i; j > 0; j--)
            printf(" ");
        for (int j = 1; j < i * 2; j++)
            printf("%c", j % 2 ? '*' : ' ');
    }
}