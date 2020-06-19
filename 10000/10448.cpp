//
// Created by kangdonguk on 2020/06/19.
//

// https://www.acmicpc.net/problem/10448
// 유레카 이론

#include <stdio.h>

int t, p, a, i, j, k, d[46];

int f(int n) {
    if (d[n]) return d[n];
    return d[n] = (n + 1) * n / 2;
}

int main() {
    scanf("%d", &t);
    while (t--) {
        a = 1;
        scanf("%d", &p);
        for (i = 1; f(i) < p && a; i++)
            for (j = 1; f(i) + f(j) < p && a; j++)
                for (k = 1; f(i) + f(j) + f(k) <= p && a; k++)
                    if (f(i) + f(j) + f(k) == p)
                        a = 0;

        printf("%d\n", !a);
    }
}