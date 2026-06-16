//
// Created by kangdonguk on 2020/07/01.
//

// https://www.acmicpc.net/problem/16561
// 3의 배수

#include <stdio.h>

int main() {
    int n, a = 0;
    scanf("%d", &n);

    n /= 3;
    for (int i = 1; i <= n - 2; i++)
        for (int j = 1; j <= n - i - 1; j++)
            a++;

    printf("%d", a);
}