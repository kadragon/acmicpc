// https://www.acmicpc.net/problem/11656
// 접미사 배열

#include <cstdio>
#include <string.h>

int main() {
    char s[1002];
    int a[1001], i, j, l;
    scanf("%s", s);
    for (i = 0; s[i]; i++)
        a[i] = i;
    l = i;

    for (i = 0; i < l - 1; i++)
        for (j = 0; j < l - i - 1; j++)
            if (strcmp(&s[a[j]], &s[a[j + 1]]) > 0)
                a[j] ^= a[j + 1] ^= a[j] ^= a[j + 1];

    for (i = 0; s[i]; i++)
        printf("%s\n", &s[a[i]]);
}