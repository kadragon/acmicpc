//
// Created by kangdonguk on 2020/05/05.
//

// https://www.acmicpc.net/problem/17256
// 달달함이 넘쳐흘러

#include <cstdio>

int main() {
    int a[3], c[3];
    scanf("%d %d %d", a, a + 1, a + 2);
    scanf("%d %d %d", c, c + 1, c + 2);

    printf("%d %d %d", c[0] - a[2], c[1] / a[1], c[2] - a[0]);
}