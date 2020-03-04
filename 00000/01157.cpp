//
// Created by kangdonguk on 2020/03/01.
//

// https://www.acmicpc.net/problem/1157
// 단어 공부

#include <stdio.h>

int c[26], max_i, max_v;
char s[1000001];

int main(void) {
    scanf("%s", s);

    for (int i=0; s[i]; i++) {
        if (s[i] >= 97)
            s[i] -= 32;

        s[i] -= 65;
        c[(int)s[i]] += 1;
    }

    for (int i=1; i<26; i++) {
        if (c[max_i] == c[i])
            max_v = -1;

        else if (c[max_i] < c[i]) {
            max_i = i;
            max_v = i;
        }
    }

    printf("%c", max_v != -1 ? (char)(max_v+65) : '?' );

    return 0;
}