//
// Created by kangdonguk on 2020/02/27.
//

// https://www.acmicpc.net/problem/10817

#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("%d", a > b ? (b > c ? b : (a > c ? c : a)) : c > b ? b : a > c ? a : c);

    return 0;
}
