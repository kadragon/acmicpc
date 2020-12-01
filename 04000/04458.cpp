// https://www.acmicpc.net/problem/4458
// 첫 글자를 대문자로

#include <cstdio>

int main() {
    int t;
    char s[31];
    scanf("%d\n", &t);
    while (t--) {
        scanf("%[^\n]s", s);
        getchar();

        if (s[0] >= 'a')
            s[0] -= 32;

        printf("%s\n", s);
    }
}
