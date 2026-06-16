//
// Created by kangdonguk on 2020/04/10.
//

// https://www.acmicpc.net/problem/15651
// N과 M (3)

#include <stdio.h>

int a[8], n, m;

void p(int s) {
    for (int i = 1; i <= n; i++) {
        a[s] = i;
        if (s == m) {
            for (int i = 1; i <= m; i++)
                printf("%d ", a[i]);
            printf("\n");
        }
        else
            p(s+1);
    }
}

int main() {
    scanf("%d %d", &n, &m);
    p(1);
}