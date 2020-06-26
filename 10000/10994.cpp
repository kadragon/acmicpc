//
// Created by kangdonguk on 2020/06/26.
//

// https://www.acmicpc.net/problem/10994
// 별 찍기 - 19

#include <stdio.h>

int main() {
    int n, c;
    scanf("%d", &n);
    c = (n - 1) * 4 + 1;

    for (int i = 1; i <= c; i++, printf("\n"))
        for (int j = 1; j <= c; j++)
            printf((i % 2 and ((i <= j and j <= c - i + 1) or (j <= i and c - i + 1 <= j))) or
                   (j % 2 and ((j <= i and i <= c - j + 1) or (i <= j and c - j + 1 <= i))) or
                   i == 1 or i == c or
                   j == 1 or j == c ? "*" : " ");
}
