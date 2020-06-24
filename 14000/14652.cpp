//
// Created by kangdonguk on 2020/06/24.
//

// https://www.acmicpc.net/problem/14652
// 나는 행복합니다~

#include <stdio.h>

int main() {
    int n, m, k;

    scanf("%d %d %d", &n, &m, &k);
    printf("%d %d", k / m, k % m);
}