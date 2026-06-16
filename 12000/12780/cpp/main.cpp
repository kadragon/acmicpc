//
// Created by kangdonguk on 2020/06/16.
//

// https://www.acmicpc.net/problem/12780
// 원피스

#include <stdio.h>

int main() {
    char s[100001], n[11];
    scanf("%s %s", s, n);
    int k, a = 0, i, j, b;
    for (k = 0; n[k]; k++);
    for (i = 0; s[i + k - 1]; i++) {
        if (n[0] == s[i] and n[k - 1] == s[i + k - 1]) {
            for (j = 0, b = 1; n[j]; j++)
                if (s[i + j] != n[j]) {
                    b = 0;
                    break;
                }
            if (b) a++;
        }
    }

    printf("%d", a);
}