//
// Created by kangdonguk on 2020/03/29.
//

// https://www.acmicpc.net/problem/11051
// 이항 계수 2

#include <stdio.h>

int v[1001][1001];

int binomial(int n, int k) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= k && j <= i; j++)
            v[i][j] = (j == 0 || i == j) ? 1 : (v[i - 1][j - 1] + v[i - 1][j]) % 10007;
    }
    return v[n][k];
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    printf("%d\n", binomial(n, k));
}