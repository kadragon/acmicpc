//
// Created by kangdonguk on 2020/06/16.
//

// https://www.acmicpc.net/problem/5555
// 반지

#include <stdio.h>

int main() {
    char s[11], t[11];
    int a, p, i, j, k, b, c = 0;
    scanf("%s %d", s, &p);
    while (p--) {
        scanf("%s", t);
        for (k = 0, a = 0; t[k]; k++);
        for (i = 0; t[i]; i++)
            if (s[0] == t[i]) {
                for (j = 0, b = 1; s[j]; j++) {
                    if (s[j] != t[(i + j) % k]) {
                        b = 0;
                        break;
                    }
                }
                a += b;
            }
        if (a) c++;
    }

    printf("%d", c);
}