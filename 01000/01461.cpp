// https://www.acmicpc.net/problem/1461
// 도서관

#include <algorithm>
#include <cstdio>

int main() {
    int n, m, p = 0, q = 0, t, r = 0, ans = 0;
    int a[10001], b[10001], c[10001];
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        if (t < 0)
            a[p++] = t;
        else
            b[q++] = t;
    }

    std::sort(a, a + p);
    std::sort(b, b + q);

    for (int i = 0; i < p; i = i + m)
        c[r++] = -a[i];
    for (int i = q - 1; i >= 0; i = i - m)
        c[r++] = b[i];

    std::sort(c, c + r);

    for (int i = 0; i < r - 1; i++)
        ans += c[i] * 2;

    printf("%d", ans + c[r - 1]);
}
