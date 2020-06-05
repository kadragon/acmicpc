//
// Created by kangdonguk on 2020/06/05.
//

// https://www.acmicpc.net/problem/14490
// 백대열

#include <stdio.h>

int x, y, r;

int gcd(int a, int b) {
    while (b) {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main() {
    scanf("%d:%d", &x, &y);
    r = gcd(x, y);
    printf("%d:%d", x / r, y / r);
}