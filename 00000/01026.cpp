//
// Created by kangdonguk on 2020/04/20.
//

// https://www.acmicpc.net/problem/1026
// 보물

#include <stdio.h>
#include <algorithm>

int a[51], b[51];

int main() {
    int n, ans = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    std::sort(a, a + n);
    std::sort(b, b + n);

    for (int i = 0; i < n; i++)
        ans += a[i] * b[n - 1 - i];

    printf("%d", ans);
}