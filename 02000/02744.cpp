//
// Created by kangdonguk on 2020/05/12.
//

// https://www.acmicpc.net/problem/2744
// 대소문자 바꾸기

#include <stdio.h>

int main() {
    char s[101];
    scanf("%s", s);

    for (int i = 0; s[i]; i++)
        printf("%c", s[i] += s[i] > 90 ? -32 : 32);
}
