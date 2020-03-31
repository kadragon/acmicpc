//
// Created by kangdonguk on 2020/03/31.
//

// https://www.acmicpc.net/problem/14501
// 퇴사

#define max(a, b) ((a) > (b) ? (a) : (b))

#include <stdio.h>

int d[16];

int main() {
    int n, k, p;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &k, &p);

        for (int j = i; j + k <= n; j++)
            d[j+k] = max(d[j+k], d[i] + p);
    }
    printf("%d", d[n]);
}