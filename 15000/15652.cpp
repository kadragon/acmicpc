//
// Created by kangdonguk on 2020/04/10.
//

// https://www.acmicpc.net/problem/15652
// N과 M (4)

#include <stdio.h>

int a[8], n, m;

void p(int s) {
    for (int i = 1; i <= n; i++) {
        if (s - 1 > 0 && a[s - 1] > i)
            continue;

        a[s] = i;
        if (s == m) {
            for (int i = 1; i <= m; i++)
                printf("%d ", a[i]);
            printf("\n");
        } else
            p(s + 1);
    }
}

int main() {
    scanf("%d %d", &n, &m);
    p(1);
}