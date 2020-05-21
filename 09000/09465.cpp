//
// Created by kangdonguk on 2020/04/03.
//

// https://www.acmicpc.net/problem/9465
// 스티커

#define max(a, b) ((a) > (b) ? (a) : (b))

#include <stdio.h>

int d[100001][2];

int main() {
    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &d[j][i]);

        int dp[n][2];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < 2; j++)
                if (i == 0)
                    dp[i][j] = d[i][j];
                else if (i == 1)
                    dp[i][j] = max(dp[i - 1][j == 0 ? 1 : 0] + d[i][j], dp[i - 1][j]);
                else
                    dp[i][j] = max(max(dp[i - 1][j == 0 ? 1 : 0], dp[i - 2][j]), dp[i - 2][j == 0 ? 1 : 0]) + d[i][j];

        printf("%d\n", max(dp[n - 1][0], dp[n - 1][1]));
    }
}