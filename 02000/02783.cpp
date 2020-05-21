//
// Created by kangdonguk on 2020/05/17.
//

// https://www.acmicpc.net/problem/2783
// 삼각 김밥

#include <stdio.h>

int main() {
    int n;
    float m, x, y;

    scanf("%f %f", &x, &y);
    m = x / y;

    scanf("%d", &n);

    while (n--) {
        scanf("%f %f", &x, &y);
        if (x / y < m) m = x / y;
    }

    printf("%.2f", m * 1000);
}