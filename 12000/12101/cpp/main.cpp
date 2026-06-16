//
// Created by kangdonguk on 2020/05/12.
//

// https://www.acmicpc.net/problem/12101
// 1, 2, 3 더하기 2

#include <stdio.h>

int c, q[11], k;

void f(int n, int p) {
    if (c >= k or n < 0)
        return;

    if (n == 0) {
        c++;
        if (k == c) {
            for (int i = 0; i < p - 1; i++)
                printf("%d+", q[i]);
            printf("%d", q[p - 1]);
        }
        return;
    }

    for (int i = 1; i <= 3; i++) {
        q[p] = i;
        f(n - i, p + 1);
    }
}

int main() {
    int n;
    scanf("%d %d", &n, &k);
    f(n, 0);

    if (c < k)
        printf("%d", -1);
}