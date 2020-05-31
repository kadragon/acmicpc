//
// Created by kangdonguk on 2020/05/31.
//

// https://www.acmicpc.net/problem/15964
// 이상한 기호

#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", (a + b) * (a - b));
}