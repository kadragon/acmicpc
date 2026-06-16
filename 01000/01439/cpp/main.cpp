//
// Created by kangdonguk on 2020/06/12.
//

// https://www.acmicpc.net/problem/1439
// 뒤집기

#include <stdio.h>

int a[2], x, y = -1;

int main() {
    while(scanf("%1d", &x) == 1) {
        if (x != y) a[x]++;
        y = x;
    }

    printf("%d", a[0] < a[1] ? a[0] : a[1]);
}