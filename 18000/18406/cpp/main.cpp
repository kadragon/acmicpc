//
// Created by kangdonguk on 2020/05/22.
//

// https://www.acmicpc.net/problem/18406
// 럭키 스트레이트

#include <stdio.h>

int main() {
    char s[9];
    int a[2] = {0,}, i, j;

    scanf("%s", s);
    for (i = 0; s[i]; i++);

    for (j = 0; j < i; j++)
        a[j / (i / 2)] += s[j] - '0';

    printf("%s", a[0] == a[1] ? "LUCKY" : "READY");
}