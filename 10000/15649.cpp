//
// Created by kangdonguk on 2020/03/27.
//

// https://www.acmicpc.net/problem/15649
// N과 M (1)

#include <stdio.h>

int n, m, s[9];

void d(int k) {
    if (k > m)
        return;

    for (int i = 1; i <= n; i++) {
        bool f = true;

        for (int j = 1; j <= k - 1; j++)
            if (s[j] == i) {
                f = false;
                break;
            }

        if (!f)
            continue;

        s[k] = i;

        if (k == m) {
            for (int j = 1; j <= m; j++)
                printf("%d ", s[j]);
            printf("\n");
        }
        d(k + 1);
    }
}

int main() {
    scanf("%d %d", &n, &m);
    d(1);
}