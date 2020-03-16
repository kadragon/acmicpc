//
// Created by kangdonguk on 2020/03/16.
//

// https://www.acmicpc.net/problem/5543
// 상근날드

#define min(a, b) ((a) < (b) ? (a) : (b))

#include <stdio.h>

int main() {
    int a, b, c, n, m;
    scanf("%d %d %d %d %d", &a, &b, &c, &n, &m);

    printf("%d", min(min(a, b), c) + min(n, m) - 50);
}
