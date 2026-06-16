//
// Created by kangdonguk on 2020/05/17.
//

// https://www.acmicpc.net/problem/10040
// 투표

#include <stdio.h>

int a[1001], b[1001], n, m, t, p;

int main() {
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
        scanf("%d", a + i);

    while (m--) {
        scanf("%d", &t);
        for (int i = 1; i <= n; i++)
            if (t >= a[i]) {
                b[i]++;
                if (b[p] < b[i]) p = i;
                break;
            }
    }

    printf("%d", p);
}