//
// Created by kangdonguk on 2020/05/16.
//

// https://www.acmicpc.net/problem/1159
// 농구 경기

#include <stdio.h>

int a[26], n, i, c;

int main() {
    char s[30];
    scanf("%d", &n);

    while (n--) {
        scanf("%s", s);
        a[s[0] - 97]++;
    }

    for (i = 0; i < 26; i++)
        if (a[i] >= 5)
            printf("%c", i + 97), c++;

    if (!c) printf("PREDAJA");
}