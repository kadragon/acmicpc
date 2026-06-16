//
// Created by kangdonguk on 2020/05/12.
//

// https://www.acmicpc.net/problem/2506
// 점수계산

#include <stdio.h>

int main() {
    int n, t, s = 0, p = 0;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &t);
        t ? s += ++p : p = 0;
    }

    printf("%d", s);
}
