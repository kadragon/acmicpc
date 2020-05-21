//
// Created by kangdonguk on 2020/04/10.
//

// https://www.acmicpc.net/problem/15665
// N과 M (11)

#include <stdio.h>
#include <algorithm>

int a[9], n, m, d[9], su[9][10001];

void p(int s) {
    for (int i = 0; i < n; i++) {
        if (su[s][d[i]])
            continue;

        su[s][d[i]] = 1;

        a[s] = d[i];

        if (s == m) {
            for (int k = 1; k <= m; k++)
                printf("%d ", a[k]);
            printf("\n");
        } else
            p(s + 1);
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