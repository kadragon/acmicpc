//
// Created by kangdonguk on 2020/05/12.
//

// https://www.acmicpc.net/problem/16486
// 운동장 한 바퀴

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.6f", 2 * a + 2 * b * 3.141592);
}
