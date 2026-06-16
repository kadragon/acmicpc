// https://www.acmicpc.net/problem/2711
// 오타맨 고창영

#include <cstdio>

int main() {
    char s[81];
    int n, t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %s", &n, s);
        for (int i = 0; s[i]; i++)
            if (i + 1 != n)
                printf("%c", s[i]);
        printf("\n");
    }
}