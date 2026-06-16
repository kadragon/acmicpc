//
// Created by kangdonguk on 2020/05/31.
//

// https://www.acmicpc.net/problem/10833
// 사과

#include <stdio.h>

int main() {
    int n, a = 0, x, y;
    scanf("%d", &n);

    while (n--) {
        scanf("%d %d", &x, &y);
        a += y % x;
    }

    printf("%d", a);
}