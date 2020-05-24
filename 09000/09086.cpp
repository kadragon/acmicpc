//
// Created by kangdonguk on 2020/05/24.
//

// https://www.acmicpc.net/problem/9086
// 문자열

#include <stdio.h>

int main() {
    int t, i;
    char s[1001];
    scanf("%d", &t);

    while (t--) {
        scanf("%s", s);

        for (i = 0; s[i]; i++);
        printf("%c%c\n", s[0], s[i - 1]);
    }
}