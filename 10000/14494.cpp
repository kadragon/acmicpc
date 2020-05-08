//
// Created by kangdonguk on 2020/05/07.
//

// https://www.acmicpc.net/problem/14494
// 다이나믹이 뭐예요?

#include <cstdio>

long long int a[1000][1000];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = i * j == 0 ? 1 : (a[i - 1][j - 1] + a[i][j - 1] + a[i - 1][j]) % 1000000007;

    printf("%lld", a[n - 1][m - 1]);
}