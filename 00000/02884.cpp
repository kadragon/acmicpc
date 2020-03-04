//
// Created by kangdonguk on 2020/02/27.
//

// https://www.acmicpc.net/problem/2884

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int c = a*60+b-45;
    c = c < 0 ? c+24*60 : c;
    printf("%d %d", c/60, c%60);

    return 0;
}
