// https://www.acmicpc.net/problem/2980
// 도로와 신호등

#include <cstdio>

int main() {
    int n, l, d[101], r[101], g[101], a = 0, t = 0, k;
    scanf("%d %d", &n, &l);
    for (int i = 1; i <= n; i++)
        scanf("%d %d %d", d + i, r + i, g + i);

    for (int i = 1; i <= n; i++) {
        if (a <= d[i])
            t += d[i] - a, a = d[i];

        k = t % (r[i] + g[i]);
        if (k < r[i])
            t += r[i] - k;
    }

    if (a < l)
        t += l - a;
    printf("%d", t);
}
