// https://www.acmicpc.net/problem/15904
// UCPC는 무엇의 약자일까?

#include <cstdio>

int main() {
    char s[1001], d[] = "UCPC";
    int c = 0;
    scanf("%[^\n]s", s);
    for (int i = 0; s[i] and c < 4; i++)
        if (s[i] == d[c])
            c++;

    printf("%s", c == 4 ? "I love UCPC" : "I hate UCPC");
}
