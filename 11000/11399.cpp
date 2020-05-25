//
// Created by kangdonguk on 2020/04/09.
//

// https://www.acmicpc.net/problem/11399
// ATM

#include <stdio.h>
#include <algorithm>

int a[1001], b[1001], ans;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    std::sort(a, a+n);

    ans = b[0] = a[0];

    for (int i = 1; i < n; i++) {
        b[i] = b[i-1] + a[i];
        ans += b[i];
    }

    printf("%d", ans);
}