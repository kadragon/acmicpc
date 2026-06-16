//
// Created by kangdonguk on 2020/02/27.
//

// https://www.acmicpc.net/problem/10951
// A+B - 4

#include <stdio.h>

int main() {
    int a = -1, b = -1;

    while (scanf("%d %d", &a, &b) != EOF)
        printf("%d\n", a+b);

    return 0;
}
