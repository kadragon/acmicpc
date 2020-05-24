//
// Created by kangdonguk on 2020/03/23.
//

// https://www.acmicpc.net/problem/1914
// 하노이 탑

#include <stdio.h>

void big_pow(int n) {
    long long a = 1, b = 0;

    for (int i = 0; i < n; i++) {
        a *= 2;
        b *= 2;
        b += a / 100000000000000;
        a %= 100000000000000;
    }
    if (b != 0)
        printf("%lld%014lld\n", b, a - 1);
    else
        printf("%lld\n", a - 1);
}

void hanoi(int n, int a, int b, int c) {
    if (n == 1) {
        printf("%d %d\n", a, c);
        return;
    }

    hanoi(n - 1, a, c, b);
    printf("%d %d\n", a, c);
    hanoi(n - 1, b, a, c);
}

int main() {
    int n;
    scanf("%d", &n);

    big_pow(n);

    if (n <= 20)
        hanoi(n, 1, 2, 3);
}
