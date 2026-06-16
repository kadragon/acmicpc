//
// Created by kangdonguk on 2020/04/02.
//

// https://www.acmicpc.net/problem/11049
// 행렬 곱셈 순서

#define min(a, b) ((a) < (b) ? (a) : (b))

#include <stdio.h>

int a[502][2];
long long dp[502][502];

long long f(int n, int m) {
    if (n == m)
        return 0;

    if (dp[n][m])
        return dp[n][m];

    if (m - n == 1)
        return dp[n][m] = a[n][0] * a[n][1] * a[m][1];

    dp[n][m] = 2147483647;
    for (int i = n; i < m; i++)
        dp[n][m] = min(f(n, i) + f(i+1, m) + a[n][0] * a[i][1] * a[m][1], dp[n][m]);

    return dp[n][m];
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d %d", &a[i][0], &a[i][1]);

    printf("%d\n", f(1, n));
}