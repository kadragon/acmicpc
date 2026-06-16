//
// Created by kangdonguk on 2020/05/24.
//

// https://www.acmicpc.net/problem/11586
// 지영 공주님의 마법 거울

#include <stdio.h>

int main() {
    char s[100][101];
    int n, t, x, y;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%s", s[i]);

    scanf("%d", &t);

    for (int i = 0; i < n; i++, printf("\n"))
        for (int j = 0; j < n; j++) {
            x = t == 3 ? n - i - 1 : i;
            y = t == 2 ? n - j - 1 : j;
            printf("%c", s[x][y]);
        }
}