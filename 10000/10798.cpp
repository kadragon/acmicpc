//
// Created by kangdonguk on 2020/05/14.
//

// https://www.acmicpc.net/problem/10798
// 세로읽기

#include <stdio.h>

int main() {
    int a[5] = {0,}, c = 0;
    char s[5][16];

    for (int i = 0; i < 5; i++)
        scanf("%s", s[i]);

    for (int i = 0; i < 15 and c < 5; i++)
        for (int j = 0; j < 5; j++)
            if (!a[j]) {
                if (s[j][i])
                    printf("%c", s[j][i]);
                else
                    a[j] = 1, c++;
            }
}