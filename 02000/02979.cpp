//
// Created by kangdonguk on 2020/05/21.
//

// https://www.acmicpc.net/problem/2979
// 트럭 주차

#include <stdio.h>

int a[4], t[101], s, e, p = 3, ans;

int main() {
    scanf("%d %d %d", a, a + 1, a + 2);
    while (p--) {
        scanf("%d %d", &s, &e);
        for (int i = s; i < e; i++)
            t[i]++;
    }

    for (int i = 1; i <= 100; i++)
        ans += a[t[i] - 1] * t[i];

    printf("%d", ans);
}