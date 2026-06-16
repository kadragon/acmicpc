// https://www.acmicpc.net/problem/1021
// 회전하는 큐

#include <cstdio>

int main() {
    int n, m, t, s = 0, p, q, sp, sq, ans = 0, d[51];
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        d[i] = i + 1;

    while (m--) {
        scanf("%d", &t);
        p = q = s;
        sp = sq = 0;
        while (d[p] != t) {
            p = (p + 1) % n;
            sp++;
        }
        while (d[q] != t) {
            q = q - 1 < 0 ? n - 1 : q - 1;
            sq++;
        }

        s = sp < sq ? p : q;
        ans += sp < sq ? sp : sq;

        for (int i = s; i < n - 1; i++)
            d[i] = d[i + 1];

        n--;

        if (s > n - 1)
            s = 0;
    }

    printf("%d", ans);
}