//
// Created by kangdonguk on 2020/06/30.
//

// https://www.acmicpc.net/problem/1120
// 문자열

#include <stdio.h>

int m, p, q, i, j, t;

int main() {
    char a[51], b[51];
    scanf("%s %s", a, b);
    while(a[p++]);
    while(b[q++]);

    m = p;

    for (; i < q - p + 1; i++) {
        for (j = 0, t = 0; a[j] and b[i + j]; j++)
            if (b[i + j] != a[j]) t++;
        if (m > t) m = t;
    }

    printf("%d", m);
}