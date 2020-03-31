//
// Created by kangdonguk on 2020/03/31.
//

// https://www.acmicpc.net/problem/2133
// 타일 채우기

#include <stdio.h>
#include <string.h>

int v[501][501], dp[501][501], m, n, q[] = {-1, 1};

int f(int p, int k) {
    if (p == 1 and k == 1)
        return 1;
    if (p < 1 or k < 1 or p > m or k > n)
        return 0;
    if (dp[p][k] != -1)
        return dp[p][k];

    int t = 0;
    for (int i = 0; i < 2; i++) {
        if (v[p][k] < v[p + q[i]][k])
            t += f(p + q[i], k);
        if (v[p][k] < v[p][k + q[i]])
            t += f(p, k + q[i]);
    }

    return dp[p][k] = t;
}

int main() {
    scanf("%d %d", &m, &n);

    memset(dp, -1, sizeof(dp));

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &v[i][j]);

    printf("%d", f(m, n));
}