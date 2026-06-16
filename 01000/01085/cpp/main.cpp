//
// Created by kangdonguk on 2020/04/27.
//

// https://www.acmicpc.net/problem/1085
// 직사각형에서 탈출

#define min(a, b) ((a) < (b) ? (a) : (b))

#include <stdio.h>

int main() {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    printf("%d", min(min(x, w-x), min(y, h-y)));
}