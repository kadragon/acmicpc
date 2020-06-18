//
// Created by kangdonguk on 2020/06/18.
//

// https://www.acmicpc.net/problem/9469
// 폰 노이만

#include <stdio.h>

int main() {
    int p, n, i;
    float t[1001], d, a, b, f;
    scanf("%d", &p);

    for (i = 0; i < p; i++) {
        scanf("%d %f %f %f %f", &n, &d, &a, &b, &f);
        t[n] = d / (a + b) * f;
    }

    for (i = 1; i <= p; i++)
        printf("%d %.3f\n", i, t[i]);
}