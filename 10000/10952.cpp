//
// Created by kangdonguk on 2020/02/27.
//

// https://www.acmicpc.net/problem/10952
// A+B - 5

#include <stdio.h>

int main() {
    int a = -1, b = -1;

    while (true) {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
            break;

        printf("%d\n", a+b);
    }

    return 0;
}
