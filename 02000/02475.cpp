//
// Created by kangdonguk on 2020/04/11.
//

// https://www.acmicpc.net/problem/2475
// 검증수

#include <stdio.h>

int main() {
    int t, a = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &t);
        a += (t * t) % 10;
    }

    printf("%d", a % 10);
}