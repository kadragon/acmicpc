//
// Created by kangdonguk on 2020/05/13.
//

// https://www.acmicpc.net/problem/5554
// 심부름 가는 길

#include <stdio.h>

int main() {
    int s = 0, t, c = 4;

    while (c--) {
        scanf("%d", &t);
        s += t;
    }

    printf("%d\n%d", s / 60, s % 60);
}