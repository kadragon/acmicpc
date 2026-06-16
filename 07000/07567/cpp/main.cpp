//
// Created by kangdonguk on 2020/05/05.
//

// https://www.acmicpc.net/problem/7567
// 그릇

#include <cstdio>

int main() {
    int a = 10;
    char s[51];
    scanf("%s", s);

    for (int i = 1; s[i]; i++)
        a += s[i - 1] == s[i] ? 5 : 10;

    printf("%d", a);
}