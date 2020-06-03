//
// Created by kangdonguk on 2020/05/04.
//

// https://www.acmicpc.net/problem/3036
// 링

#include <cstdio>

int gcd(int a, int b) {
    int t;

    while (b) {
        t = a % b;
        a = b;
        b = t;
    }

    return a;
}

int main() {
    int n, a, t, g;
    scanf("%d", &n);
    scanf("%d", &a);

    for (int i = 0; i < n - 1; i++, printf("\n")) {
        scanf("%d", &t);
        g = gcd(a, t);
        printf("%d/%d", a / g, t / g);
    }
}