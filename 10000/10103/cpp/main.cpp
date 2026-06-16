//
// Created by kangdonguk on 2020/06/14.
//

// https://www.acmicpc.net/problem/10103
// 주사위 게임

#include <stdio.h>

int main() {
    int n, x, y, a = 100, b = 100;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &x, &y);
        if (x != y) x > y ? b -= x : a -= y;
    }

    printf("%d\n%d", a, b);
}