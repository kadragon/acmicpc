//
// Created by kangdonguk on 2020/03/04.
//

// https://www.acmicpc.net/problem/2231
// 분해합

#include <stdio.h>

int c(int n) {
    int sum = n;

    while (n) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int n = 0, ans = 0;
    scanf("%d", &n);

    for (int i = n / 2; i < n; i++)
        if (c(i) == n) {
            ans = i;
            break;
        }

    printf("%d", ans);

    return 0;
}
