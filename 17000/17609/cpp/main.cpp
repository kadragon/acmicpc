// https://www.acmicpc.net/problem/17609
// 회문

#include <cstdio>
#include <string.h>

char s[100001];

int f(int st, int en, int k) {
    if (k == 2)
        return 2;
    int a = 2, t;
    while (st < en) {
        if (s[st] == s[en]) {
            st++, en--;
            continue;
        } else {
            if (s[st + 1] == s[en]) {
                t = f(st + 2, en - 1, k + 1);
                if (a > t)
                    a = t;
            }
            if (s[st] == s[en - 1]) {
                t = f(st + 1, en - 2, k + 1);
                if (a > t)
                    a = t;
            }
            return a;
        }
    }
    return k;
}

int main() {
    int t, len, a, st, en;

    scanf("%d", &t);
    while (t--) {
        a = 0, st = 0;
        scanf("%s", s);
        len = strlen(s);
        en = len - 1;
        printf("%d\n", f(0, en, 0));
    }
}
