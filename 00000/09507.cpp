//
// Created by kangdonguk on 2020/05/14.
//

// https://www.acmicpc.net/problem/9507
// Generations of Tribbles

#include <stdio.h>

long long p[70] = {1, 1, 2, 4,}, q[70], d = 1000000000;

long long f(int n) {
    if (p[n])
        return p[n];

    long long t = f(n - 1) + f(n - 2) + f(n - 3) + f(n - 4);
    q[n] = t / d + q[n - 1] + q[n - 2] + q[n - 3] + q[n - 4];
    return p[n] = t % d;
}

int main() {
    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        f(n);
        if (q[n])
            printf("%lld%09lld\n", q[n], p[n]);
        else
            printf("%lld\n", p[n]);
    }
}