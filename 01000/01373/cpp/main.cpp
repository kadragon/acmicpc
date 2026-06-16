// https://www.acmicpc.net/problem/1373
// 2진수 8진수

#include <cstdio>
#include <string.h>

char s[1000001];

int main() {
    scanf("%s", s);
    int t, l = strlen(s);
    t = l % 3 ? l % 3 : 3;

    for (int i = 0, c = 3 - t, a = 0; i < l; i++) {
        a *= 2;
        a += s[i] - '0';
        c++;
        if (c == 3) {
            printf("%d", a);
            a = 0, c = 0;
        }
    }
}