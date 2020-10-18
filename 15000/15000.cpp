// https://www.acmicpc.net/problem/15000
// CAPS

#include <cstdio>

int main() {
    char s[1000001];
    scanf("%s", s);
    for (int i = 0; s[i]; i++)
        printf("%c", s[i] - 32);
}
