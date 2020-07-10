// https://www.acmicpc.net/problem/10821
// 정수의 개수

#include <stdio.h>

int main() {
    char s[101];
    int a = 1;
    scanf("%s", s);
    for (int i = 0; s[i]; i++)
        if (s[i] == ',')
            a++;
    printf("%d", a);
}
