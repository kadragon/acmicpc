// https://www.acmicpc.net/problem/17173
// 배수들의 합

#include <cstdio>

int main() {
    int n, m, k, a = 0, d[1001] = {0};
    scanf("%d %d", &n, &m);
    while (m--) {
        scanf("%d", &k);
        for (int i = 1; i * k <= n; i++)
            if (!d[i * k]) {
                a += i * k;
                d[i * k] = 1;
            }
    }

    printf("%d", a);
}