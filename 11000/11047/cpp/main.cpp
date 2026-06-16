//
// Created by kangdonguk on 2020/03/27.
//

// https://www.acmicpc.net/problem/11047
// 동전 0

#include <stdio.h>

int v[10];

int main() {
    int n, k, ans = 0;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    for (int i = n - 1; i >= 0; i--) {
        ans += k / v[i];
        k %= v[i];
        if (k == 0)
            break;
    }

    printf("%d", ans);
}