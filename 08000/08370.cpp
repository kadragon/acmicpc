//
// Created by kangdonguk on 2020/06/26.
//

// https://www.acmicpc.net/problem/8370
// Plane

#include <stdio.h>

int main() {
    int n, m, i, j;
    scanf("%d %d %d %d", &n, &i, &m, &j);
    printf("%d", n * i + m * j);
}
