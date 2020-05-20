//
// Created by kangdonguk on 2020/05/20.
//

// https://www.acmicpc.net/problem/9325
// 얼마?

#include <stdio.h>

int main() {
    int t, s, n, q, p;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &s, &n);

        while (n--) {
            scanf("%d %d", &q, &p);
            s += q * p;
        }

        printf("%d\n", s);
    }
}