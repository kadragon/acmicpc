//
// Created by kangdonguk on 2020/05/25.
//

// https://www.acmicpc.net/problem/11660
// 구간 합 구하기 5

#include <stdio.h>

int main() {
    int a[1025][1025], n, m, x1, y1, x2, y2;

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
            a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
        }

    while (m--) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        printf("%d\n", a[x2][y2] - a[x1 - 1][y2] - a[x2][y1 - 1] + a[x1 - 1][y1 - 1]);
    }
}
