//
// Created by kangdonguk on 2020/05/17.
//

// https://www.acmicpc.net/problem/2804
// 크로스워드 만들기

#include <stdio.h>

int main() {
    char a[31], b[31];
    int x, y, p, q, f = 1;

    scanf("%s %s", a, b);
    for (x = 0; a[x]; x++)
        for (y = 0; b[y] && f; y++)
            if (a[x] == b[y])
                p = x, q = y, f = 0;

    for (y = 0; b[y]; y++, printf("\n"))
        for (x = 0; a[x]; x++)
            printf("%c", y == q ? a[x] : x == p ? b[y] : '.');
}