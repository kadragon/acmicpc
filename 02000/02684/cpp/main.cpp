//
// Created by kangdonguk on 2020/06/24.
//

// https://www.acmicpc.net/problem/2684
// 동전 게임

#include <stdio.h>

int n, a[8], i, j, d;

int main() {
    char s[41];
    scanf("%d", &n);
    while (n--) {
        scanf("%s", s);
        for (i = 0; i < 38; i++) {
            for (j = 0, d = 0; j < 3; j++)
                d = d * 2 + (s[i + j] == 'H' ? 1 : 0);
            a[d]++;
        }

        for (i = 0; i < 8; i++) {
            printf("%d ", a[i]);
            a[i] = 0;
        }

        printf("\n");
    }
}