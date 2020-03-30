//
// Created by kangdonguk on 2020/03/29.
//

// https://www.acmicpc.net/problem/11050
// 이항 계수 1

#include <stdio.h>

int v[11][11];

int binomial(int n, int k) {
    if (n == k || k == 0)
        return 1;
    if (v[n][k])
        return v[n][k];

    return v[n][k] = binomial(n - 1, k) + binomial(n - 1, k - 1);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    printf("%d", binomial(n, k));
}