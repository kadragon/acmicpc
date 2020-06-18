//
// Created by kangdonguk on 2020/06/18.
//

// https://www.acmicpc.net/problem/13235
// 팰린드롬

#include <stdio.h>

int main() {
    char s[21];
    int i = 0, j = 0;
    scanf("%s", s);
    for (; s[j + 1]; j++);
    while (i < j and (s[i++] == s[j--]));

    printf("%s", i < j ? "false" : "true");
}