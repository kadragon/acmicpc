//
// Created by kangdonguk on 2020/06/24.
//

// https://www.acmicpc.net/problem/9946
// 단어 퍼즐

#include <stdio.h>

int a[26], t, c = 1, i;

int main() {
    char s[1001];
    while (true) {
        t = 1;
        scanf("%s", s);
        if (s[0] == 'E') break;

        for (i = 0; s[i]; i++)
            a[s[i] - 'a']++;

        scanf("%s", s);
        for (i = 0; s[i]; i++)
            a[s[i] - 'a']--;

        for (i = 0; i < 26; i++)
            if (a[i] != 0) t = a[i] = 0;

        printf("Case %d: %s\n", c++, t ? "same" : "different");
    }
}