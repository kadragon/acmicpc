//
// Created by kangdonguk on 2020/05/02.
//

// https://www.acmicpc.net/problem/1731
// 추론

#include <cstdio>

int a[51];

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", a + i);

    printf("%d", a[0] * a[2] == a[1] * a[1] ? a[n - 1] * (a[1] / a[0]) : a[n - 1] + (a[1] - a[0]));
}