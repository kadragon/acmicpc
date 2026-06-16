//
// Created by kangdonguk on 2020/06/03.
//

// https://www.acmicpc.net/problem/5361
// 전투 드로이드 가격

#include <stdio.h>

int main() {
    int t, c;
    float a, d[] = {350.34, 230.90, 190.55, 125.30, 180.90};
    scanf("%d", &t);
    while (t--) {
        a = 0;
        for (int i = 0; i < 5; i++) {
            scanf("%d", &c);
            a += d[i] * c;
        }
        printf("$%.2f\n", a);
    }
}