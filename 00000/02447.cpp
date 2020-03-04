//
// Created by kangdonguk on 2020/03/04.
//

// https://www.acmicpc.net/problem/2447
// 별 찍기 - 10

#include <stdio.h>

bool a[2188][2188];

void blank(int x, int y, int c) {
    int v = c / 3;
    for (int i = 0; i < v; i++)
        for (int j = 0; j < v; j++)
            a[x + v + i][y + v + j] = true;

    if (c > 9)
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                blank(x + v * i, y + v * j, v);
}


int main() {
    int n;

    scanf("%d", &n);

    blank(0, 0, n);

    for (int i = 0; i < n; i++, printf("\n"))
        for (int j = 0; j < n; j++)
            printf("%c", (i % 3 == 1 and j % 3 == 1) or a[i][j] == 1 ? ' ' : '*');
}
