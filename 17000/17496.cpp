//
// Created by kangdonguk on 2020/06/02.
//

// https://www.acmicpc.net/problem/17496
// 스타후르츠

#include <stdio.h>

int main() {
    int n, t, c, p;

    scanf("%d %d %d %d", &n, &t, &c, &p);
    printf("%d", ((n - 1) / t) * c * p);
}