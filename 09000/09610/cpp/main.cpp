//
// Created by kangdonguk on 2020/05/24.
//

// https://www.acmicpc.net/problem/9610
// 사분면

#include <stdio.h>

int x, y, q[5], a, t, p[2][2] = {{3, 2},
                                 {4, 1}};

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &x, &y);
        if (x * y == 0) a++;
        else q[p[x > 0][y > 0]]++;
    }

    for (int i = 1; i <= 4; i++)
        printf("Q%d: %d\n", i, q[i]);
    printf("AXIS: %d", a);
}