//
// Created by kangdonguk on 2020/06/01.
//

// https://www.acmicpc.net/problem/17389
// 보너스 점수

#include <stdio.h>

int n, a, b, i;

int main() {
    char s[10001];
    scanf("%d %s", &n, s);

    for (; s[i]; i++)
        s[i] == 'O' ? a += i + 1 + b++ : b = 0;

    printf("%d", a);
}