//
// Created by kangdonguk on 2020/03/01.
//

// https://www.acmicpc.net/problem/2908
// 상수

#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    a = a/100 + (a/10%10)*10 + (a%10)*100;
    b = b/100 + (b/10%10)*10 + (b%10)*100;

    a = a > b ? a : b;

    printf("%d", a);

    return 0;
}