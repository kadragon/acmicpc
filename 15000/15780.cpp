//
// Created by kangdonguk on 2020/05/21.
//

// https://www.acmicpc.net/problem/15780
// 멀티탭 충분하니?

#include <stdio.h>

int main() {
    int n, k, a = 0, t;
    scanf("%d %d", &n, &k);

    while (k--) {
        scanf("%d", &t);
        a += (t / 2 + t % 2);
    }

    printf("%s", a >= n ? "YES" : "NO");
}