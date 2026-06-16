//
// Created by kangdonguk on 2020/06/19.
//

// https://www.acmicpc.net/problem/2789
// 유학 금지

#include <stdio.h>

int a[26];

int main() {
    char s[] = "CAMBRIDGE", d[101];
    for (int i = 0; s[i]; i++)
        a[s[i] - 'A'] = 1;
    scanf("%s", d);
    for (int i = 0; d[i]; i++)
        if (!a[d[i] - 'A'])
            printf("%c", d[i]);
}