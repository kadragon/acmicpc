//
// Created by kangdonguk on 2020/06/10.
//

// https://www.acmicpc.net/problem/16674
// 2018년을 되돌아보며

#include <stdio.h>

int a[10], t, p = 1, i;

int main() {
    char s[11];
    scanf("%s", s);

    for (i = 0; s[i]; i++) {
        a[t = s[i] - '0']++;
        if (t > 2 && t != 8) p = 0;
    }

    if (p) {
        if (a[0] * a[1] * a[2] * a[8]) p = 2;
        if (a[0] == a[1] && a[1] == a[2] && a[2] == a[8]) p = 8;
    }

    printf("%d", p);
}
