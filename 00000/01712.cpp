//
// Created by kangdonguk on 2020/03/01.
//

// https://www.acmicpc.net/problem/1712
// 손익분기점

#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", c-b > 0 ? a/(c-b)+1 : -1);

    return 0;
}