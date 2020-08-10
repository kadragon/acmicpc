// https://www.acmicpc.net/problem/4659
// 비밀번호 발음하기

#include <cstdio>
#include <string.h>

char s[21], vowels[] = "aeiou";
int ans, p, vp;

void input() {
    scanf("%s", s);
}

void solve() {
    ans = 1, p = 0, vp = 0;
    int cv = 0, cc = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == s[i + 1] and s[i] != 'e' and s[i] != 'o') {
            ans = 0;
            break;
        }
        p = 0;
        for (int j = 0; j < 5; j++) {
            if (vowels[j] == s[i]) {
                p = 1, cv++, cc = 0, vp = 1;
                break;
            }
        }
        if (!p)
            cc++, cv = 0;
        if (cc > 2 or cv > 2) {
            ans = 0;
            break;
        }
    }
    if (!vp)
        ans = 0;
}

void output() {
    printf("<%s> is%s acceptable.\n", s, ans ? "" : " not");
}

int main() {
    while (true) {
        input();
        if (strcmp(s, "end") == 0)
            break;
        solve();
        output();
    }
}