//
// Created by kangdonguk on 2020/06/14.
//

// https://www.acmicpc.net/problem/5598
// 카이사르 암호

#include <stdio.h>

int main() {
    char s[1001];
    scanf("%s", s);

    for (int i = 0; s[i]; i++)
        printf("%c", ((s[i] - 'A') + 23) % 26 + 'A');
}