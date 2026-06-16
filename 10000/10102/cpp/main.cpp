//
// Created by kangdonguk on 2020/06/12.
//

// https://www.acmicpc.net/problem/10102
// 개표

#include <stdio.h>

int main() {
    int a, i = 0;
    char s[16];
    scanf("%d %s", &a, s);
    for (a = 0; s[i]; i++)
        s[i] == 'A' ? a++ : a--;

    printf("%s", a > 0 ? "A" : (a ? "B" : "Tie"));
}