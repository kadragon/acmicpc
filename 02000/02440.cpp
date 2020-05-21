//
// Created by kangdonguk on 2020/03/28.
//

// https://www.acmicpc.net/problem/2440
// 별 찍기 - 3

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while(n--) {
        for (int i = 0; i <= n; i++)
            printf("%c", '*');
        if (n != 0)
            printf("\n");
    }
}