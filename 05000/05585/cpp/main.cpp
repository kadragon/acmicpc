//
// Created by kangdonguk on 2020/04/17.
//

// https://www.acmicpc.net/problem/5585
// 거스름돈

#include <stdio.h>

int main() {
    int n, r[] = {500, 100, 50, 10, 5, 1}, ans = 0;
    scanf("%d", &n);
    n = 1000 - n;

    for (int i = 0; n; i++) {
        ans += n / r[i];
        n %= r[i];
    }

    printf("%d", ans);
}