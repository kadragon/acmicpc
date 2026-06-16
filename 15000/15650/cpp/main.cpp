//
// Created by kangdonguk on 2020/03/27.
//

// https://www.acmicpc.net/problem/15650
// N과 M (2)

#include <stdio.h>

int n, m, s[9];

void d(int k, int v) {
    if (k > m)
        return;

    for (int i = v; i <= n; i++) {
        s[k] = i;

        if (k == m) {
            for (int j = 1; j <= m; j++)
                printf("%d ", s[j]);
            printf("\n");
        }
        d(k + 1, i + 1);
    }
}

int main() {
    scanf("%d %d", &n, &m);
    d(1, 1);
}