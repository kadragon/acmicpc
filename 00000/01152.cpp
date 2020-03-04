//
// Created by kangdonguk on 2020/03/01.
//

// https://www.acmicpc.net/problem/1152
// 단어의 개수

#include <stdio.h>

int c;
char s[1000001];

int main(void) {
    scanf("%[^\n]s", s);

    if (s[0] != ' ' and !s[1]) {
        printf("%d", 1);
        return 0;
    }

    for (int i = 1; s[i]; i++)
        if (s[i] == ' ' or !s[i+1])
            c++;

    printf("%d", c);

    return 0;
}