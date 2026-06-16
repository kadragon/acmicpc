// https://www.acmicpc.net/problem/8371
// Dyslexia

#include <cstdio>

int main() {
    int n, a = 0;
    char s[100001], p[100001];
    scanf("%d %s %s", &n, s, p);

    for (int i = 0; i < n; i++)
        if (s[i] != p[i])
            a++;

    printf("%d", a);
}
