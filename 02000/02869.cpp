//
// Created by kangdonguk on 2020/03/02.
//

// https://www.acmicpc.net/problem/2869
// 달팽이는 올라가고 싶다

#include <stdio.h>

int main(void) {
    int a, b, v;

    scanf("%d %d %d", &a, &b, &v);

    if (a == v) {
        printf("%d", 1);
        return 0;
    }

    printf("%d", (v - b) / (a - b) + ((v - b) % (a - b) != 0 ? 1 : 0));

    return 0;
}