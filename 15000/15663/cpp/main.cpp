//
// Created by kangdonguk on 2020/04/10.
//

// https://www.acmicpc.net/problem/15663
// N과 M (9)

#include <stdio.h>
#include <algorithm>

int a[9], n, m, d[8], u[8], su[9][10001];

void p(int s) {
    for (int i = 0; i < n; i++) {
        if (u[i] || su[s][d[i]])
            continue;

        u[i] = 1;
        su[s][d[i]] = 1;

        a[s] = d[i];

        if (s == m) {
            for (int k = 1; k <= m; k++)
                printf("%d ", a[k]);
            printf("\n");
        } else
            p(s + 1);

        u[i] = 0;
    }
    for (int i = 0; i < n; i++)
        su[s][d[i]] = 0;
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &d[i]);

    std::sort(d, d + n);

    p(1);
}