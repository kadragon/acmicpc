//
// Created by kangdonguk on 2020/06/26.
//

// https://www.acmicpc.net/problem/10995
// 별 찍기 - 20

#include <stdio.h>

int main() {
    char a[200];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n * 2; i++)
        a[i] = i % 2 ? ' ' : '*';
    a[n * 2 - 1] = 0;

    for (i = 0; i < n; i++)
        printf("%s%s\n", i % 2 ? " " : "", a);
}
