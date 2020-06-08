//
// Created by kangdonguk on 2020/06/09.
//

// https://www.acmicpc.net/problem/4597
// 패리티

#include <stdio.h>

int main() {
    char s[32];
    while (true) {
        scanf("%s", s);
        if (s[0] == '#') break;
        int a = 0, i = 0;
        for (; s[i]; i++) {
            if (s[i] == '1' || s[i] == 'e') a++;
            printf("%c", s[i] == 'e' || s[i] == 'o' ? a % 2 ? '0' : '1' : s[i]);
        }
        printf("\n");
    }
}
