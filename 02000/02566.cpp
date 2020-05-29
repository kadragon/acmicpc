//
// Created by kangdonguk on 2020/05/29.
//

// https://www.acmicpc.net/problem/2566
// 최댓값

#include <stdio.h>

int main() {
    int max = 0, x, y, t, i, j;

    for (i = 1; i <= 9; i++)
        for (j = 1; j <= 9; j++) {
            scanf("%d", &t);
            if (max < t) {
                max = t;
                x = i, y = j;
            }
        }

    printf("%d\n%d %d", max, x, y);
}
