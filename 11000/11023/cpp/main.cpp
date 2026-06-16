//
// Created by kangdonguk on 2020/06/09.
//

// https://www.acmicpc.net/problem/11023
// 더하기 3

#include <stdio.h>

int main() {
    int a = 0, t;
    while (scanf("%d", &t) == 1)
        a += t;
    printf("%d", a);
}
