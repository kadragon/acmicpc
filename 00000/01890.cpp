//
// Created by kangdonguk on 2020/03/31.
//

// https://www.acmicpc.net/problem/1890
// 점프

#include <stdio.h>

long long dp[102][102];

int main() {
    int n, t;
    scanf("%d", &n);

    dp[1][1] = 1;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &t);
            if (dp[i][j] != 0 and t != 0) {
                if (i + t <= n)
                    dp[i + t][j] += dp[i][j];
                if (j + t <= n)
                    dp[i][j + t] += dp[i][j];
            }
        }

    printf("%lld", dp[n][n]);
}