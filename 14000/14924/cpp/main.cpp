//
// Created by kangdonguk on 2020/06/12.
//

// https://www.acmicpc.net/problem/14924
// 폰 노이만과 파리

#include <stdio.h>

int main() {
    int s, t, d;
    scanf("%d %d %d", &s, &t, &d);
    printf("%d", d / s / 2 * t);
}