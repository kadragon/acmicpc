//
// Created by kangdonguk on 2020/05/12.
//

// https://www.acmicpc.net/problem/15667
// 2018 연세대학교 프로그래밍 경진대회

#include <stdio.h>

int main() {
    int n, k = 1;
    scanf("%d", &n);

    while (k * (k + 1) < n - 1)
        k++;

    printf("%d", k);
}
