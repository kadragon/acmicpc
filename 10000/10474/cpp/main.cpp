//
// Created by kangdonguk on 2020/06/09.
//

// https://www.acmicpc.net/problem/10474
// 분수좋아해?

#include <stdio.h>

int main() {
    int a, b;
    while (true) {
        scanf("%d %d", &a, &b);
        if (!b) break;
        printf("%d %d / %d\n", a / b, a % b, b);
    }
}
