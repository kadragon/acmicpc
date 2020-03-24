//
// Created by kangdonguk on 2020/03/24.
//

// https://www.acmicpc.net/problem/10757
// 큰 수 A+B

#include <stdio.h>

int main() {
    int a, b, n;

    scanf("%d", &n);

    while(n--) {
        scanf("%d,%d", &a, &b);
        printf("%d\n", a+b);
    }
}