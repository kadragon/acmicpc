// https://www.acmicpc.net/problem/17502
// 클레어와 팰린드롬

#include <cstdio>

int main() {
    char s[101];
    int n, t;
    scanf("%d", &n);
    scanf("%s", s);
    for (int i = 0; i <= n - i - 1; i++) {
        t = n - i - 1;
        if (s[i] == '?' && s[t] == '?')
            s[i] = 'a', s[t] = 'a';
        else if (s[i] == '?')
            s[i] = s[t];
        else if (s[t] == '?')
            s[t] = s[i];
    }

    printf("%s", s);
}