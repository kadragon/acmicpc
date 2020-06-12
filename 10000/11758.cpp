//
// Created by kangdonguk on 2020/06/12.
//

// https://www.acmicpc.net/problem/11758
// CCW

#include <stdio.h>

int main() {
    int x[3], y[3], t;
    for (int i = 0; i < 3; i++)
        scanf("%d %d", x + i, y + i);

    t = (x[1] - x[0]) * (y[2] - y[0]) - (y[1] - y[0]) * (x[2] - x[0]);
    printf("%d", t == 0 ? 0 : t > 0 ? 1 : -1);
}