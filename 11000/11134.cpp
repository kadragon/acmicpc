//
// Created by kangdonguk on 2020/06/03.
//

// https://www.acmicpc.net/problem/11134
// 쿠키애호가

#include <stdio.h>

int main() {
    int t, n, c;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &c);
        printf("%d\n", n / c + (n % c > 0));
    }
}