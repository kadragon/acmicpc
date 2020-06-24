//
// Created by kangdonguk on 2020/06/24.
//

// https://www.acmicpc.net/problem/11945
// 뜨거운 붕어빵

#include <stdio.h>

int main() {
    char s[11];
    int n, m, i;
    scanf("%d %d", &n, &m);
    while (n--) {
        scanf("%s", s);
        for (i = 0; s[i]; i++)
            printf("%c", s[m - 1 - i]);
        printf("\n");
    }
}