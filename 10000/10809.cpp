//
// Created by kangdonguk on 2020/02/28.
//

// https://www.acmicpc.net/problem/10809
// 알파벳 찾기

#include <stdio.h>

int main(void) {
    char s[101];
    int n[26];

    for (int i = 0; i < 26; i++)
        n[i] = -1;

    scanf("%s", s);

    for (int i = 0; s[i]; i++)
        if (n[(int)s[i]-97] == -1)
            n[(int)s[i]-97] = i;

    for (int i = 0; i < 26; i++)
        printf("%d ", n[i]);

    return 0;
}
