// https://www.acmicpc.net/problem/19564
// 반복

#include <cstdio>

int main() {
    int a = 1;
    char s[100002];
    scanf("%s", s);

    for (int i = 1; s[i]; i++)
        if (s[i - 1] >= s[i])
            a++;

    printf("%d", a);
}
