//
// Created by kangdonguk on 2020/05/29.
//

// https://www.acmicpc.net/problem/10988
// 팰린드롬인지 확인하기

#include <stdio.h>

int main() {
    char s[101];
    int l = 0, p = 1, i;

    scanf("%s", s);
    for (; s[l]; l++);

    for (i = 0; i < (l + 1) / 2 and p; i++) {
        if (s[i] != s[l - i - 1])
            p = 0;
    }

    printf("%d", p);
}
