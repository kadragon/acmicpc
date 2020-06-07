//
// Created by kangdonguk on 2020/06/08.
//

// https://www.acmicpc.net/problem/10599
// 페르시아의 왕들

#include <stdio.h>

int main() {
    int a, b, c, d;
    while (true) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (!a && !b && !c && !d) break;
        printf("%d %d\n", c - b, d - a);
    }
}

