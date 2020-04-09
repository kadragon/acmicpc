//
// Created by kangdonguk on 2020/04/09.
//

// https://www.acmicpc.net/problem/3009
// 네 번째 점

#include <stdio.h>

int main() {
    int a[6], x, y;
    for (int i = 0; i < 6; i++)
        scanf("%d", &a[i]);

    x = a[0] == a[2] ? a[4] : a[0] == a[4] ? a[2] : a[0];
    y = a[1] == a[3] ? a[5] : a[1] == a[5] ? a[3] : a[1];

    printf("%d %d", x, y);
}