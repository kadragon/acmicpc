//
// Created by kangdonguk on 2020/04/16.
//

// https://www.acmicpc.net/problem/10797
// 10부제

#include <stdio.h>

int main() {
    int n, ans = 0, c = 5, t;
    scanf("%d", &n);

    while (c--) {
        scanf("%d", &t);
        if (n == t)
            ans++;
    }

    printf("%d", ans);
}