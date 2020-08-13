// https://www.acmicpc.net/problem/18238
// ZOAC 2

#include <cstdio>

int f(char a, char b) {
    int p = a - b;
    if (p < 0)
        p *= -1;
    return p <= 13 ? p : 26 - p;
}

int main() {
    int a = 0;
    char s[101] = "A";
    scanf("%s", s + 1);
    for (int i = 1; s[i]; i++)
        a += f(s[i - 1], s[i]);

    printf("%d", a);
}