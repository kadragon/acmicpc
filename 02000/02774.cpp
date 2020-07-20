// https://www.acmicpc.net/problem/2774
// 아름다운 수

#include <cstdio>

int main() {
    int n;
    char s[11];
    scanf("%d", &n);
    while (n--) {
        int d[10] = {0}, a = 0, t, i;
        scanf("%s", s);
        for (i = 0; s[i]; i++) {
            t = s[i] - '0';
            if (!d[t])
                a++, d[t] = 1;
        }
        printf("%d\n", a);
    }
}