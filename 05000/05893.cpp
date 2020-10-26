// https://www.acmicpc.net/problem/5893
// 17배

#include <cstdio>
#include <string.h>

int main() {
    char s[1010];
    scanf("%s", s);
    int len = strlen(s), v[1010] = {0};
    for (int i = 0; i < len; i++)
        v[i + 1] = s[i] - '0';
    for (int i = 0; i < len; i++)
        v[i + 5] += s[i] - '0';

    for (int i = len + 4; i > 0; i--) {
        v[i - 1] += v[i] / 2;
        v[i] %= 2;
    }

    for (int i = 0; i < len + 5; i++) {
        if (!i && !v[i])
            continue;
        printf("%d", v[i]);
    }
}
