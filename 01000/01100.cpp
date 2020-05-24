//
// Created by kangdonguk on 2020/04/22.
//

// https://www.acmicpc.net/problem/1100
// 하얀

#include <stdio.h>

int main() {
    int ans = 0;
    char c[9];
    for (int i = 0; i < 8; i++) {
        scanf("%s", c);
        getchar();

        for (int j = 0; j < 8; j++)
            ans += ((i + j) % 2 == 0) && c[j] == 'F' ? 1 : 0;
    }

    printf("%d", ans);
}