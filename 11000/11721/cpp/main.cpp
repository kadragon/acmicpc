//
// Created by kangdonguk on 2020/04/11.
//

// https://www.acmicpc.net/problem/11721
// 열 개씩 끊어 출력하기

#include <stdio.h>

int main() {
    int i = 0;
    char s[101];
    scanf("%s", s);

    while (s[i]) {
        printf("%c", s[i++]);
        if (i != 0 && i % 10 == 0)
            printf("\n");
    }
}