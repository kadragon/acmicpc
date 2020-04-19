//
// Created by kangdonguk on 2020/04/19.
//

// https://www.acmicpc.net/problem/10799
// 쇠막대기

#include <stdio.h>

int main() {
    int a = 0, n = 0;
    char c[100001];

    scanf("%s", c);

    for (int i = 0; c[i]; i++)
        if (c[i] == '(')
            n++;
        else {
            n--;
            a += c[i - 1] == '(' ? n : 1;
        }

    printf("%d", a);
}