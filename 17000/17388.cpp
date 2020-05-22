//
// Created by kangdonguk on 2020/05/22.
//

// https://www.acmicpc.net/problem/17388
// 와글와글 숭고한

#include <stdio.h>

int main() {
    char s[][9] = {"Soongsil", "Korea", "Hanyang", "OK"};
    int a[3], p = 0, m = 0, i;

    for (int i = 0; i < 3; i++) {
        scanf("%d", a + i);
        p += a[i];
        if (a[i] < a[m]) m = i;
    }

    printf("%s", p > 99 ? s[3] : s[m]);
}