//
// Created by kangdonguk on 2020/06/14.
//

// https://www.acmicpc.net/problem/11179
// 2진수 뒤집기

#include <stdio.h>

int main() {
    int n, a = 0;
    scanf("%d", &n);
    while (n) {
        a = a * 2 + n % 2;
        n /= 2;
    }
    printf("%d", a);
}