//
// Created by kangdonguk on 2020/02/28.
//

// https://www.acmicpc.net/problem/11720
// 숫자의 합

#include <stdio.h>

int main(void) {
    char s[101];
    int n, sum = 0;

    scanf("%d", &n);
    scanf("%s", s);

    for (int i = 0; i < n; i++)
        sum += (int) s[i] - 48;

    printf("%d", sum);

    return 0;
}
