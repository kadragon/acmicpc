//
// Created by kangdonguk on 2020/05/16.
//

// https://www.acmicpc.net/problem/5618
// 공약수

#include <stdio.h>

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    int n, p[3], m, q[10000], t = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
        m = i == 0 ? p[i] : gcd(m, p[i]);
    }

    for (int i = 1; i * i <= m; i++)
        if (m % i == 0) {
            printf("%d\n", i);
            if (i * i != m) q[t++] = m / i;
        }

    for (int i = t - 1; i >= 0; i--)
        printf("%d\n", q[i]);
}
