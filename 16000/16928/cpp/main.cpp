//
// Created by kangdonguk on 2020/06/12.
//

// https://www.acmicpc.net/problem/16928
// 뱀과 사다리 게임

#include <stdio.h>

int a[101], b[101], n, m, c, x, y;

void f(int s, int t) {
    if (((s - 2) / 6 + 1 < t) or (a[s] and a[s] <= t)) return;
    a[s] = t;

    for (int i = 1; i <= 6; i++)
        if (s + i <= 100) {
            if (b[s + i])
                f(b[s + i], t + 1);
            else
                f(s + i, t + 1);
        }
}

int main() {
    scanf("%d %d", &n, &m);
    c = n + m;
    while (c--) {
        scanf("%d %d", &x, &y);
        b[x] = y;
    }

    f(1, 0);

    printf("%d", a[100]);
}