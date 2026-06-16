// https://www.acmicpc.net/problem/2011
// 암호코드

#include <cstdio>
#include <string.h>

int a, d = 1000000, len, p[5001];
char s[5001];

int f(int n) {
    if (s[n] == '0')
        return 0;
    if (p[n])
        return p[n];
    if (n == len)
        return 1;
    p[n] = f(n + 1);
    if ((s[n] == '1' or (s[n] == '2' and s[n + 1] < '7')) and n + 1 < len)
        p[n] += f(n + 2);

    return p[n] %= d;
}

int main() {
    scanf("%s", s);
    len = strlen(s);
    printf("%d", f(0));
}