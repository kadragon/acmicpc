// https://www.acmicpc.net/problem/02238
// 경매

#include <cstdio>

char s[100001][11];
int t[10001], u, n, p, c[10001], min;

int main() {
    scanf("%d %d", &u, &n);
    for (int i = 1; i <= n; i++) {
        scanf("%s %d", s[i], &p);
        c[p]++;
        if (!t[p])
            t[p] = i;
    }

    int min = n + 1, f;
    for (int i = 1; i <= u; i++)
        if (c[i] and min > c[i])
            min = c[i], f = i;

    printf("%s %d", s[t[f]], f);
}
