//
// Created by kangdonguk on 2020/05/13.
//

// https://www.acmicpc.net/problem/10708
// 크리스마스 파티

#include <stdio.h>

int a[101];

int main() {
    int n, m, t[101], v;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++)
        scanf("%d", t + i);

    for (int i = 0; i < m; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &v);
            t[i] == v ? a[j]++ : a[t[i]]++;
        }

    for (int i = 1; i <= n; i++)
        printf("%d\n", a[i]);
}