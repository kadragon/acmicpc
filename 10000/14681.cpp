//
// Created by kangdonguk on 2020/03/17.
//

// https://www.acmicpc.net/problem/14681
// 사분면 고르기

#include <stdio.h>

int main() {
    int x, y, q[2][2] = {{3, 2}, {4, 1}};;

    scanf("%d %d", &x, &y);
    printf("%d", q[x > 0][y > 0]);
}