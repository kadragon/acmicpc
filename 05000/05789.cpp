// https://www.acmicpc.net/problem/5789
// 한다 안한다

#include <cstdio>
#include <string.h>

int main() {
    int n, t;
    char s[1001];
    scanf("%d", &n);
    while (n--) {
        scanf("%s", s);
        t = strlen(s);
        printf("Do-it%s\n", s[t / 2 - 1] == s[t / 2] ? "" : "-Not");
    }
}