//
// Created by kangdonguk on 2020/06/28.
//

// https://www.acmicpc.net/problem/2010
// 플러그

#include <stdio.h>

int main() {
    int n, t, a = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &t);
        a += t - 1;
    }
    printf("%d", a + 1);
}