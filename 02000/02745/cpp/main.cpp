// https://www.acmicpc.net/problem/2745
// 진법 변환

#include <stdio.h>

int main() {
    char s[10001];
    int b, a = 0;
    scanf("%s %d", s, &b);
    for (int i = 0; i < s[i]; i++) {
        a *= b;
        a += s[i] > '9' ? s[i] - 'A' + 10 : s[i] - '0';
    }
    printf("%d", a);
}