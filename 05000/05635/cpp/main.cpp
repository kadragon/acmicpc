// https://www.acmicpc.net/problem/5635
// 생일

#include <cstdio>

int main() {
    int n, d, m, y;
    int a[101], ma = 0, mi = 0;
    char s[101][16];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", s[i], &d, &m, &y);
        a[i] = y * 10000 + m * 100 + d;
        ma = a[i] > a[ma] ? i : ma;
        mi = a[i] < a[mi] ? i : mi;
    }

    printf("%s\n%s", s[ma], s[mi]);
}