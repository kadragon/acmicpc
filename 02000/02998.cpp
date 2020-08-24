// https://www.acmicpc.net/problem/2998
// 8진수

#include <cstdio>
#include <string.h>

int main() {
    char s[101];
    int t, c;
    scanf("%s", s);
    t = strlen(s);
    c = 3 - t % 3;
    if (c == 3)
        c = 0;
    for (int i = 0, a = 0; s[i]; i++) {
        a *= 2;
        a += s[i] - '0';
        c++;
        if (c == 3) {
            printf("%d", a);
            c = 0, a = 0;
        }
    }
}
