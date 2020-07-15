// https://www.acmicpc.net/problem/13752
// 히스토그램

#include <cstdio>

int main() {
    char s[81] = "================================================================================";
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        s[n] = '\0';
        printf("%s\n", s);
        s[n] = '=';
    }
}