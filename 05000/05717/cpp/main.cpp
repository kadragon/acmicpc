//
// Created by kangdonguk on 2020/05/20.
//

// https://www.acmicpc.net/problem/5717
// 상근이의 친구들

#include <stdio.h>

int main() {
    int n, m;
    while (true) {
        scanf("%d %d", &n, &m);
        if (!(n + m)) break;
        printf("%d\n", n + m);
    }
}