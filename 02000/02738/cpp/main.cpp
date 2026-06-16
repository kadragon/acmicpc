//
// Created by kangdonguk on 2020/06/25.
//

// https://www.acmicpc.net/problem/2738
// 행렬 덧셈

#include <stdio.h>

int main() {
    int a[101][101], t, n, m, i, j;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++, printf("\n"))
        for (j = 0; j < m; j++) {
            scanf("%d", &t);
            printf("%d ", a[i][j] + t);
        }
}
