//
// Created by kangdonguk on 2020/06/09.
//

// https://www.acmicpc.net/problem/5523
// 경기 결과

#include <stdio.h>

int main() {
    int a = 0, b = 0, x, y, t;

    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &x, &y);
        if (x - y) x > y ? a++ : b++;
    }

    printf("%d %d", a, b);
}
