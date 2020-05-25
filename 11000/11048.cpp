//
// Created by kangdonguk on 2020/03/31.
//

// https://www.acmicpc.net/problem/11048
// 이동하기

#define max(a, b) ((a) > (b) ? (a) : (b))

#include <stdio.h>

int dp[1002][1002];

int main() {
    int n, m, t;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            scanf("%d", &t);
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + t;
        }

    printf("%d", dp[n][m]);
}