//
// Created by kangdonguk on 2020/04/03.
//

// https://www.acmicpc.net/problem/11053
// 가장 긴 증가하는 부분 수열

#include <stdio.h>

int d[1001], n, dp[1001], max = 1;

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &d[i]);

    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = i - 1; j >= 0; j--)
            if (d[i] > d[j]) {
                dp[i] = dp[i] > dp[j] + 1 ? dp[i] : dp[j] + 1;
                max = max > dp[i] ? max : dp[i];
            }
    }

    printf("%d", max);
}