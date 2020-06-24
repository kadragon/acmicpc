//
// Created by kangdonguk on 2020/06/24.
//

// https://www.acmicpc.net/problem/15489
// 파스칼 삼각형

#include <stdio.h>

int d[31][31], r, c, w, p, i, j;

int f(int a, int b) {
    if (b == 1 or a == b) return 1;
    if (d[a][b]) return d[a][b];

    return d[a][b] = f(a - 1, b - 1) + f(a - 1, b);
}

int main() {
    scanf("%d %d %d", &r, &c, &w);

    for (i = 0; i < w; i++)
        for (j = 0; j <= i; j++)
            p += f(i + r, j + c);

    printf("%d", p);
}