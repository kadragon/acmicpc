//
// Created by kangdonguk on 2020/04/20.
//

// https://www.acmicpc.net/problem/1934
// 최소공배수

#include <stdio.h>

int gcd(int a, int b) {
    int r;

    while (b) {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main() {
    int n, a, b;
    scanf("%d", &n);

    while (n--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a * b / gcd(a, b));
    }
}