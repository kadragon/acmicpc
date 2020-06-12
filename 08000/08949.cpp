//
// Created by kangdonguk on 2020/06/12.
//

// https://www.acmicpc.net/problem/8949
// 대충 더해

#include <stdio.h>

void f(int a, int b) {
    if (a || b) {
        f(a / 10, b / 10);
        printf("%d", a % 10 + b % 10);
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    f(a, b);
}