//
// Created by kangdonguk on 2020/04/04.
//

// https://www.acmicpc.net/problem/11066
// 파일 합치기

#define min(a, b) ((a) < (b) ? (a): (b))

#include <stdio.h>

int dp[501][501], d[501], sum[501];

int f(int s, int e) {
    if (dp[s][e])
        return dp[s][e];

    if (s == e)
        return 0;

    if (e - s == 1)
        return d[s] + d[e];

    dp[s][e] = 987654321;
    for (int i = s; i <= e; i++)
        dp[s][e] = min(f(s, i) + f(i+1, e) + sum[e] - sum[s-1], dp[s][e]);

    return dp[s][e];
}

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            scanf("%d", &d[i]);
            sum[i] = d[i] + sum[i-1];

            for (int j = 1; j <= n; j++)
                dp[i][j] = 0;
        }

        printf("%d\n", f(1, n));
    }
}