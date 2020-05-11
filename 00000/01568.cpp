//
// Created by kangdonguk on 2020/05/11.
//

// https://www.acmicpc.net/problem/1568
// 새

#include <stdio.h>
#include <math.h>

int f(int n) {
    int p = (int) sqrt(n * 2), k;

    while (true) {
        k = (1 + p) * p / 2;
        if (k <= n)
            return p;
        p--;
    }
}

int main() {
    int n, t, a = 0;
    scanf("%d", &n);

    while (n > 0) {
        t = f(n);
        a += t;
        n -= (t + 1) * t / 2;
    }

    printf("%d", a);
}
