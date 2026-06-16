//
// Created by kangdonguk on 2020/05/14.
//

// https://www.acmicpc.net/problem/1789
// 수들의 합

#include <stdio.h>

int main() {
    long long a, i;
    scanf("%lld", &a);

    for (i = 1; i * (i + 1) / 2 <= a; i++);
    printf("%lld", i - 1);
}