//
// Created by kangdonguk on 2020/04/20.
//

// https://www.acmicpc.net/problem/2920
// 음계

#include <stdio.h>

int main() {
    int a[8], d, p = 0;
    char y[3][12] = {"ascending", "descending", "mixed"};

    for (int i = 0; i < 8; i++)
        scanf("%d", &a[i]);

    for (int i = 1; i < 8; i++) {
        d = a[i - 1] - a[i];
        if (!(d == -1 or d == 1)) {
            p = 2;
            break;
        }
    }

    printf("%s", p == 2 ? y[2] : a[7] == 8 ? y[0] : y[1]);
}