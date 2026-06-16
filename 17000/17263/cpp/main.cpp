//
// Created by kangdonguk on 2020/06/24.
//

// https://www.acmicpc.net/problem/17263
// Sort 마스터 배지훈

#include <stdio.h>

int main() {
    int n, a = 0, t;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &t);
        if (a < t) a = t;
    }

    printf("%d", a);
}