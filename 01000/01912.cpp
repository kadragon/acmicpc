//
// Created by kangdonguk on 2020/03/18.
//

// https://www.acmicpc.net/problem/1912
// 연속합

#define max(a, b) ((a) > (b) ? (a) : (b))

#include <stdio.h>

int v[100001];
int d[100001];

int main() {
    int n, ans;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    ans = d[0] = v[0];

    for (int i = 1; i < n; i++) {
        d[i] = max(d[i-1] + v[i], v[i]);
        ans = max(ans, d[i]);
    }

    printf("%d", ans);
}