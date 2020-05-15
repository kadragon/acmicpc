//
// Created by kangdonguk on 2020/05/15.
//

// https://www.acmicpc.net/problem/5032
// 탄산 음료

#include <stdio.h>

int main() {
    int e, f, c, a = 0, k;
    scanf("%d %d %d", &e, &f, &c);
    k = e + f;

    do {
        a += k / c;
        k = k / c + k % c;
    } while (k >= c);

    printf("%d", a);
}