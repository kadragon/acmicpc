//
// Created by kangdonguk on 2020/05/25.
//

// https://www.acmicpc.net/problem/2902
// KMP는 왜 KMP일까?

#include <stdio.h>

int main() {
    char s[101];
    scanf("%s", s);
    for (int i = 0; s[i]; i++)
        if (i == 0 or s[i - 1] == '-')
            printf("%c", s[i]);
}
