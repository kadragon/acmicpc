//
// Created by kangdonguk on 2020/05/16.
//

// https://www.acmicpc.net/problem/8320
// 직사각형을 만드는 방법

#include <stdio.h>

int main() {
    int n, a = 0, i, j;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        for (j = i; i * j <= n; j++)
            a++;

    printf("%d", a);
}