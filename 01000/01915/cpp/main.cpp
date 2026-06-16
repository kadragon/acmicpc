//
// Created by kangdonguk on 2020/05/08.
//

// https://www.acmicpc.net/problem/1915
// 가장 큰 정사각형

#define min(a, b) ((a) < (b) ? (a) : (b))

#include <stdio.h>

int a[1001][1001];

int main() {
    int n, m, ans = 0;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            scanf("%1d", &a[i][j]);
            if (a[i][j]) {
                a[i][j] = min(min(a[i - 1][j], a[i][j - 1]), a[i - 1][j - 1]) + 1;
                ans = ans > a[i][j] ? ans : a[i][j];
            }
        }

    printf("%d", ans * ans);
}
