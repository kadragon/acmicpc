//
// Created by kangdonguk on 2020/04/20.
//

// https://www.acmicpc.net/problem/1748
// 수 이어 쓰기 1

#include <stdio.h>

int main() {
    int n, ans = 0, t = 10, c = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i >= t) {
            t *= 10;
            c++;
        }
        ans += c;
    }

    printf("%d", ans);
}