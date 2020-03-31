//
// Created by kangdonguk on 2020/03/31.
//

// https://www.acmicpc.net/problem/2294
// 동전 2

#define min(a, b) ((a) < (b) ? (a) : (b))

#include <stdio.h>

int dp[101][10001], v[102];

int f(int n, int k) {
    if (k == 0)
        return 0;

    if (n < 0 || k < 0)
        return 10001;

    if (dp[n][k])
        return dp[n][k];

    return dp[n][k] = min(min(f(n - 1, k), f(n - 1, k - v[n]) + 1), f(n, k - v[n]) + 1);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    printf("%d", f(n - 1, k) != 10001 ? f(n - 1, k) : -1);
}