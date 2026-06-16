//
// Created by kangdonguk on 2020/03/30.
//

// https://www.acmicpc.net/problem/2163
// 초콜릿 자르기

#include <stdio.h>

int a[301][301];

int f(int x, int y) {
    if (x * y <= 1)
        return 0;
    if (x * y == 2)
        return 1;

    return a[x][y] = (x > y ? f(x/2, y) + f(x - x/2, y) : f(x, y/2) + f(x, y - y/2)) + 1;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d", f(n, m));
}