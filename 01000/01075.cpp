//
// Created by kangdonguk on 2020/06/18.
//

// https://www.acmicpc.net/problem/1075
// 나누기

#include <stdio.h>

int main() {
    int n, f;
    scanf("%d\n%d", &n, &f);
    for (int i = n - n % 100;; i++)
        if (i % f == 0) {
            printf("%02d", i % 100);
            break;
        }
}