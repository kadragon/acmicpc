//
// Created by kangdonguk on 2020/06/03.
//

// https://www.acmicpc.net/problem/10179
// 쿠폰

#include <stdio.h>

int main() {
    int t;
    double a;
    scanf("%d", &t);
    while (t--) {
        scanf("%lf", &a);
        printf("$%.2lf\n", a * 0.8);
    }
}