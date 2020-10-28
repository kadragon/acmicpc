// https://www.acmicpc.net/problem/12904
// A와 B

#include <cstdio>
#include <string.h>

int main() {
    char s[1001], t[1001], c;
    int ls, lt;

    scanf("%s\n%s", s, t);
    ls = strlen(s), lt = strlen(t);

    while (ls < lt) {
        if (t[lt - 1] == 'A') {
            t[--lt] = '\0';
        } else {
            t[--lt] = '\0';
            for (int i = 0; i < lt - i - 1; i++) {
                c = t[i];
                t[i] = t[lt - i - 1];
                t[lt - i - 1] = c;
            }
        }
    }

    printf("%d", strcmp(s, t) == 0 ? 1 : 0);
}
