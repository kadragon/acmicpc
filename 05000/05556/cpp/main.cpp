//
// Created by kangdonguk on 2020/05/17.
//

// https://www.acmicpc.net/problem/5556
// 타일

#include <stdio.h>

int main() {
    int n, k, a, b, t, m;
    scanf("%d %d", &n, &k);

    m = n / 2 + n % 2;

    while (k--) {
        scanf("%d %d", &a, &b);

        if (a > m) a = n - a + 1;
        if (b > m) b = n - b + 1;
        if (a > b)
            t = a, a = b, b = t;

        printf("%d ", a % 3 == 0 ? 3 : a % 3);
    }
}