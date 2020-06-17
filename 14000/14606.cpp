//
// Created by kangdonguk on 2020/06/17.
//

// https://www.acmicpc.net/problem/14606
// 피자 (Small)

#include <stdio.h>

int a[11], p;

int f(int n) {
    if (n < 2)
        return 0;

    return a[n] = a[n] ? a[n] : (n / 2) * (n - (n / 2)) + f(n / 2) + f(n - (n / 2));
}

int main() {
    scanf("%d", &p);
    printf("%d", f(p));
}