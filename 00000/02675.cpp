//
// Created by kangdonguk on 2020/03/01.
//

// https://www.acmicpc.net/problem/2675
// 문자열 반복

#include <stdio.h>

int main(void) {
    int c, r;
    char s[21] = "";

    scanf("%d", &c);

    while (c--) {
        scanf("%d %s", &r, s);
        for (int i=0; s[i]; i++)
            for (int j=0; j<r; j++)
                printf("%c", s[i]);

        printf("\n");
    }

    return 0;
}