//
// Created by kangdonguk on 2020/05/17.
//

// https://www.acmicpc.net/problem/3053
// 택시 기하학

#define PI 3.14159265358979323846

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    n *= n;

    printf("%.6f\n%.6f", n * PI, 2.0 * n);
}