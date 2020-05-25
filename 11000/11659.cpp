//
// Created by kangdonguk on 2020/05/25.
//

// https://www.acmicpc.net/problem/11659
// 구간 합 구하기 4

#include <stdio.h>

int a[100001], n, m, x, y;

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", a + i);
        a[i] += a[i - 1];
    }

    while (m--) {
        scanf("%d %d", &x, &y);
        printf("%d\n", a[y] - a[x - 1]);
    }
}
