//
// Created by kangdonguk on 2020/04/09.
//

// https://www.acmicpc.net/problem/2609
// 최대공약수와 최소공배수

#include <stdio.h>

int main() {
    int a, b, x = 0;
    scanf("%d %d", &a, &b);

    for (int i = a < b ? a : b; x == 0; i--)
        if (a % i == 0 && b % i == 0)
            x = i;

    printf("%d\n%d", x, x * a / x * b / x);
}