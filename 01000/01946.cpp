//
// Created by kangdonguk on 2020/06/04.
//

// https://www.acmicpc.net/problem/1946
// 신입 사원

#include <stdio.h>

int main() {
    int n, a[100000], t, q, p, i, m;
    scanf("%d", &q);
    while (q--) {
        p = 1;
        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            scanf("%d", &t);
            scanf("%d", a + t);
        }

        for (i = 2, m = 1; i <= n; i++) {
            if (a[m] > a[i])
                m = i, p++;
        }

        printf("%d\n", p);
    }
}