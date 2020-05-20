//
// Created by kangdonguk on 2020/05/20.
//

// https://www.acmicpc.net/problem/10156
// 과자

#include <stdio.h>

int main() {
    int k, n, m, u;
    scanf("%d %d %d", &k, &n, &m);
    u = k * n - m;
    printf("%d", u > 0 ? u : 0);
}