//
// Created by kangdonguk on 2020/05/11.
//

// https://www.acmicpc.net/problem/5532
// 방학 숙제

#include <stdio.h>

int f(int a, int b) {
    return (a / b) + (a % b != 0 ? 1 : 0);
}

int main() {
    int l, a, b, c, d;
    scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
    a = f(a, c);
    b = f(b, d);
    printf("%d", l - (a > b ? a : b));
}
