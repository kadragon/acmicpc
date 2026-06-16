//
// Created by kangdonguk on 2020/05/02.
//

// https://www.acmicpc.net/problem/1264
// 모음의 개수

#include <cstdio>

int main() {
    char s[256];
    char e[11] = "aeiouAEIOU";
    int a;

    while (true) {
        a = 0;

        scanf("%[^\n]s", s);
        getchar();

        if (s[0] == '#')
            break;

        for (int i = 0; s[i]; i++)
            for (int j = 0; e[j]; j++)
                if (s[i] == e[j]) {
                    a++;
                    continue;
                }

        printf("%d\n", a);
    }
}