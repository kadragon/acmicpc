//
// Created by kangdonguk on 2020/06/15.
//

// https://www.acmicpc.net/problem/11170
// 0의 개수

#include <stdio.h>

int a[1000001] = {1,}, t, n, m, d;

void f(int q) {
    int p = 0, r = q;
    if (a[q]) return;

    while (q) {
        if (!(q % 10)) p++;
        q /= 10;
    }

    a[r] = p;
    if (!(a[r - 1])) f(r - 1);
}

int main() {
    scanf("%d", &t);
    while (t--) {
        d = 0;
        scanf("%d %d", &n, &m);

        f(m);

        for (int i = n; i <= m; i++)
            d += a[i];

        printf("%d\n", d);
    }
}