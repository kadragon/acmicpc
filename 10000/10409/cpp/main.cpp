//
// Created by kangdonguk on 2020/05/15.
//

// https://www.acmicpc.net/problem/10409
// 서버

#include <stdio.h>

int main() {
    int n, t, i, p;
    scanf("%d %d", &n, &t);

    for (i = 0; i < n and t > 0; i++) {
        scanf("%d", &p);
        t -= p;
    }

    printf("%d", t < 0 ? i - 1 : i);
}