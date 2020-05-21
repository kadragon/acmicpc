//
// Created by kangdonguk on 2020/05/11.
//

// https://www.acmicpc.net/problem/2953
// 나는 요리사다

#include <stdio.h>

int max, a[6];

int main() {
    int t;
    for (int i = 1; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &t);
            a[i] += t;
        }
        if (a[i] > a[max]) max = i;
    }

    printf("%d %d", max, a[max]);
}