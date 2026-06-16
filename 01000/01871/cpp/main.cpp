// https://www.acmicpc.net/problem/1871
// 좋은 자동차 번호판

#include <cstdio>

int abs(int k) {
    return k < -1 ? k * -1 : k;
}

int main() {
    int n, p, q, i;
    char s[9];
    scanf("%d", &n);
    while (n--) {
        p = q = 0;
        scanf("%s", s);
        for (i = 0; i < 3; i++) {
            p *= 26;
            p += s[i] - 'A';
        }
        for (i = 4; i < 8; i++) {
            q *= 10;
            q += s[i] - '0';
        }
        printf("%snice\n", abs(p - q) <= 100 ? "" : "not ");
    }
}