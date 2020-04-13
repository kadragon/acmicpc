//
// Created by kangdonguk on 2020/04/13.
//

// https://www.acmicpc.net/problem/2752
// 세수정렬

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
        swap(&a, &b);
    if (b > c)
        swap(&b, &c);
    if (a > b)
        swap(&a, &b);

    printf("%d %d %d", a, b, c);
}
