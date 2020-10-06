// https://www.acmicpc.net/problem/15873
// 공백 없는 A+B

#include <cstdio>

int main() {
    char s[5];
    scanf("%s", s);
    int n, t;
    for (n = 0; s[n]; n++)
        ;

    if (n == 2)
        t = s[0] - '0' + s[1] - '0';
    else if (n == 3)
        t = s[s[1] == '0' ? 2 : 0] - '0' + 10;
    else
        t = 20;

    printf("%d", t);
}
