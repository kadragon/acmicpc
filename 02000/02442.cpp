//
// Created by kangdonguk on 2020/03/28.
//

// https://www.acmicpc.net/problem/2442
// 별 찍기 - 5

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i - 1; j++)
            printf("%c", ' ');
        for (int j = 0; j < i * 2 + 1; j++)
            printf("%c", '*');
        if (i != n - 1)
            printf("\n");
    }
}