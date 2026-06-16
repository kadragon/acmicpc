//
// Created by kangdonguk on 2020/07/02.
//

// https://www.acmicpc.net/problem/1550
// 16진수

#include <stdio.h>

int main() {
    char s[7];
    scanf("%s", s);
    int a = 0;

    for (int i = 0; s[i]; i++) {
        a *= 16;
        a += s[i] < 58 ? s[i] - '0' : s[i] - 'A' + 10;
    }

    printf("%d", a);
}