//
// Created by kangdonguk on 2020/04/20.
//

// https://www.acmicpc.net/problem/10992
// 별 찍기 - 17

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++, printf("\n")) {
        for (int j = n - i; j > 1; j--)
            printf(" ");
        for (int j = 0; j < i * 2 + 1; j++)
            printf("%c", j == 0 or j == i * 2 or i == n - 1 ? '*' : ' ');
    }
}