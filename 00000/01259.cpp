//
// Created by kangdonguk on 2020/04/11.
//

// https://www.acmicpc.net/problem/1259
// 팰린드롬수

#include <stdio.h>

int main() {
    char s[6];
    while (true) {

        scanf("%s", s);

        if (s[0] == '0')
            break;

        if (s[1] == '\0' ||
            (s[2] == '\0' && s[0] == s[1]) ||
            (s[3] == '\0' && s[0] == s[2]) ||
            (s[4] == '\0' && s[0] == s[3] && s[1] == s[2]) ||
            (s[0] == s[4] && s[1] == s[3])
                )
            printf("yes\n");
        else
            printf("no\n");
    }
}
