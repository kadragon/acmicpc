//
// Created by kangdonguk on 2020/07/01.
//

// https://www.acmicpc.net/problem/14489
// 치킨 두 마리 (...)

#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    d = a + b;
    printf("%d", d >= 2 * c ? d - 2 * c : d);
}