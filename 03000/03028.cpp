//
// Created by kangdonguk on 2020/06/14.
//

// https://www.acmicpc.net/problem/3028
// 창영마을

#include <stdio.h>

int main() {
    int t, a[] = {1, 0, 0};
    int b[][2] = {{0, 1},
                  {1, 2},
                  {0, 2}};
    char s[51];
    scanf("%s", s);

    for (int i = 0; s[i]; i++) {
        t = s[i] - 'A';
        a[b[t][0]] ^= a[b[t][1]] ^= a[b[t][0]] ^= a[b[t][1]];
    }

    for (int i = 0; i < 3; i++)
        if (a[i] == 1) printf("%d", i + 1);
}