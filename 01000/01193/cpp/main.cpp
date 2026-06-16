//
// Created by kangdonguk on 2020/03/02.
//

// https://www.acmicpc.net/problem/1193
// 분수찾기

#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    int i = 1;

    while (true) {
        if (a <= (i + 1)*i / 2) {
            int re = a - i * (i - 1) / 2;

            if (i%2)
                printf("%d/%d", i - re + 1, re);
            else
                printf("%d/%d", re, i - re + 1);
            break;
        }
        i++;
    }

    return 0;
}