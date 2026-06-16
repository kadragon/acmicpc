//
// Created by kangdonguk on 2020/04/16.
//

// https://www.acmicpc.net/problem/5597
// 과제 안 내신 분..?

#include <stdio.h>

bool ch[31];

int main() {
    int t, c = 28;

    while (c--) {
        scanf("%d", &t);
        ch[t] = true;
    }

    for (int i = 1; i <= 30; i++)
        if (!ch[i])
            printf("%d\n", i);
}