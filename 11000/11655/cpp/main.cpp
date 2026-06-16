//
// Created by kangdonguk on 2020/06/03.
//

// https://www.acmicpc.net/problem/11655
// ROT13

#include <stdio.h>

int main() {
    char s[101];
    scanf("%[^\n]s", s);

    for (int i = 0; s[i]; i++)
        printf("%c", s[i] < 'A' ? s[i] : s[i] >= 'a' ? (s[i] - 'a' + 13) % 26 + 'a' : (s[i] - 'A' + 13) % 26 + 'A');
}