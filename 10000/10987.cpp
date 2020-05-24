//
// Created by kangdonguk on 2020/05/24.
//

// https://www.acmicpc.net/problem/10987
// 모음의 개수

#include <stdio.h>

int main() {
    char s[101], t[] = "aeiou";
    int a = 0;
    scanf("%s", s);

    for (int i = 0; s[i]; i++)
        for (int j = 0; j < 5; j++)
            if (s[i] == t[j])
                a++;

    printf("%d", a);
}