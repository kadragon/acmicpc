//
// Created by kangdonguk on 2020/06/24.
//

// https://www.acmicpc.net/problem/16395
// 파스칼의 삼각형

#include <stdio.h>

int d[31][31], n, k;

int f(int a, int b) {
    if (b == 1 or a == b) return 1;
    if (d[a][b]) return d[a][b];

    return d[a][b] = f(a - 1, b - 1) + f(a - 1, b);
}

int main() {
    scanf("%d %d", &n, &k);
    printf("%d", f(n, k));
}