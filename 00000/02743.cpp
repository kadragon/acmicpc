//
// Created by kangdonguk on 2020/04/11.
//

// https://www.acmicpc.net/problem/2743
// 단어 길이 재기

#include <stdio.h>

int main() {
    int i;
    char c[101];

    scanf("%s", c);

    for (i = 0; c[i]; i++);
    printf("%d", i);
}