//
// Created by kangdonguk on 2020/03/17.
//

// https://www.acmicpc.net/problem/10996
// 별 찍기 - 21

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    bool flip;

    for (int i = 1; i <= n * 2; i++) {
        flip = i % 2 == 1;
        for (int j = 1; j <= n; j++) {
            if (!(j == n and !flip))
                printf("%c", flip ? '*' : ' ');
            flip = !flip;
        }
        printf("\n");
    }
}