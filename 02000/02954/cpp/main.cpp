// https://www.acmicpc.net/problem/2954
// 창영이의 일기장

#include <cstdio>

int main() {
    char s[101];
    scanf("%[^\n]s", s);
    for (int i = 0; s[i]; i++) {
        printf("%c", s[i]);
        if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
            i += 2;
    }
}
