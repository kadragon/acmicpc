// https://www.acmicpc.net/problem/3062
// 수 뒤집기

#include <cstdio>
#include <string.h>

int reverse_sum(int a) {
    int t = a, p = 0;
    while (t) {
        p *= 10;
        p += t % 10;
        t /= 10;
    }
    return p + a;
}

void check_d(int a) {
    int d[7], p = 0, ans = 1;
    while (a) {
        d[p++] = a % 10;
        a /= 10;
    }
    for (int i = 0; i < p - i and ans; i++)
        if (d[i] != d[p - 1 - i])
            ans = 0;

    printf("%s\n", ans ? "YES" : "NO");
}

int main() {
    int t, a;

    scanf("%d", &t);
    while (t--) {
        scanf("%d", &a);
        check_d(reverse_sum(a));
    }
}
