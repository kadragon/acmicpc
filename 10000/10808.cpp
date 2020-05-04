//
// Created by kangdonguk on 2020/05/04.
//

// https://www.acmicpc.net/problem/10808
// 알파벳 개수

#include <cstdio>

int d[26], i;

int main() {
    char s[101];
    scanf("%s", s);

    while (s[i])
        d[s[i++] - 97]++;

    for (i = 0; i < 26; i++)
        printf("%d ", d[i]);
}