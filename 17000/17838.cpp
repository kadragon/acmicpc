// https://www.acmicpc.net/problem/17838
// 커맨드

#include <cstdio>
#include <string.h>

char s[10001];

int solve() {
    int l = strlen(s);
    if (l != 7)
        return 0;

    if (s[0] != s[2] and s[0] == s[1] and s[0] == s[4] and s[2] == s[3] and s[2] == s[5] and s[2] == s[6])
        return 1;
    return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%s", s);
        printf("%d\n", solve());
    }
}
