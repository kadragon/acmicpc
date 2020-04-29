//
// Created by kangdonguk on 2020/04/29.
//

// https://www.acmicpc.net/problem/1032
// 명령 프롬프트

#include <cstdio>

int main() {
    char s[51][52];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%s", s[i]);

    for (int i = 0; s[0][i]; i++) {
        int c = 1;
        for (int j = 0; j < n - 1 and c; j++)
            c = s[j][i] == s[j + 1][i] ? 1 : 0;

        printf("%c", c == 1 ? s[0][i] : '?');
    }
}