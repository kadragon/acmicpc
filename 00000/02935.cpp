//
// Created by kangdonguk on 2020/05/15.
//

// https://www.acmicpc.net/problem/2935
// 소음

#include <stdio.h>

int main() {
    char a[101], b[101], o;
    int p, q, i;

    scanf("%s %c %s", a, &o, b);
    for (p = 0; a[p]; p++);
    for (q = 0; b[q]; q++);

    if (o == '*')
        for (i = 0; i < p + q - 1; i++)
            printf("%d", i == 0 ? 1 : 0);
    else
        for (i = p > q ? p : q; i > 0; i--)
            printf("%d", (i == p) + (i == q));
}