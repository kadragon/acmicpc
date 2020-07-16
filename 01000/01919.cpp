// https://www.acmicpc.net/problem/1919
// 애너그램 만들기

#include <cstdio>

int d[26], p;

int main() {
    char a[1001], b[1001];
    scanf("%s %s", a, b);

    for (int i = 0; a[i]; i++)
        d[a[i] - 'a']++;

    for (int i = 0; b[i]; i++)
        d[b[i] - 'a']--;

    for (int i = 0; i < 26; i++)
        p += d[i] < 0 ? d[i] * -1 : d[i];

    printf("%d", p);
}