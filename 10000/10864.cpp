//
// Created by kangdonguk on 2020/06/08.
//

// https://www.acmicpc.net/problem/10864
// 친구

#include <stdio.h>

int n, m, a[1001], x, y, i;

int main() {
    scanf("%d %d", &n, &m);

    while (m--) {
        scanf("%d %d", &x, &y);
        a[x]++, a[y]++;
    }

    for (i = 1; i <= n; i++)
        printf("%d\n", a[i]);
}
