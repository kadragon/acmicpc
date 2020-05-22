//
// Created by kangdonguk on 2020/04/13.
//

// https://www.acmicpc.net/problem/18883
// N M 찍기

#include <stdio.h>

int main() {
    int n, m, s = 1;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++, printf("\n")) {
        for (int j = 0; j < m; j++)
            if (j + 1 != m)
                printf("%d ", s++);
            else
                printf("%d", s++);
    }
}