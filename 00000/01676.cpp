//
// Created by kangdonguk on 2020/04/21.
//

// https://www.acmicpc.net/problem/1676
// 팩토리얼 0의 개수

#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 5; i <= n; i = i + 5)
        for (int t = i; t % 5 == 0; t /= 5)
            count++;

    printf("%d", count);
}