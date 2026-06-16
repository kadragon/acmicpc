//
// Created by kangdonguk on 2020/03/01.
//

// https://www.acmicpc.net/problem/2941
// 크로아티아 알파벳

#include <stdio.h>

char s[101];

int main(void) {
    scanf("%s", s);

    int c = 1;
    for (int i=1; s[i]; i++) {
        c++;
        if (s[i] == '=') {
            if (i > 1 and s[i-1] == 'z' and s[i-2] == 'd')
                c -= 2;
            else if (s[i-1] == 'c' or s[i-1] == 's' or s[i-1] == 'z')
                c--;
        } else if (s[i] == '-') {
            if (s[i-1] == 'c' or s[i-1] == 'd')
                c--;
        } else if (s[i] == 'j') {
            if (s[i - 1] == 'l' or s[i - 1] == 'n')
                c--;
        }
    }

    printf("%d", c);

    return 0;
}