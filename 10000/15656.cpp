//
// Created by kangdonguk on 2020/04/10.
//

// https://www.acmicpc.net/problem/15656
// N과 M (7)

#include <stdio.h>
#include <algorithm>

int a[8], n, m, d[8];

void p(int s) {
    for (int i = 0; i < n; i++) {
        a[s] = d[i];

        if (s == m) {
            for (int k = 1; k <= m; k++)
                printf("%d ", a[k]);
            printf("\n");
        } else
            p(s + 1);
    }
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &d[i]);

    std::sort(d, d + n);

    p(1);
}