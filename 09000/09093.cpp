//
// Created by kangdonguk on 2020/05/28.
//

// https://www.acmicpc.net/problem/9093
// 단어 뒤집기

#include <stdio.h>

int t, p, i;
char s[1001], a[21];

int main() {
    scanf("%d", &t);

    while (t--) {
        getchar();
        scanf("%[^\n]s", s);

        for (i = 0; s[i]; i++) {
            if (s[i] == ' ') {
                while (p > 0) printf("%c", a[--p]);
                printf(" ");
            } else
                a[p++] = s[i];
        }
        while (p > 0) printf("%c", a[--p]);
        printf("\n");
    }
}
