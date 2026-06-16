// https://www.acmicpc.net/problem/2108
// 통계학

#include <algorithm>
#include <cstdio>
#include <math.h>

int main() {
    int n, d[500001], c[8002] = {0}, pm = 0, a = 4001, b = 4001;
    long long p = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", d + i);
        if (++c[d[i] + 4000] > pm)
            pm = c[d[i] + 4000];

        p += d[i];
    }

    for (int i = 0; i < 8002; i++)
        if (c[i] == pm) {
            if (i - 4000 < a) {
                b = a;
                a = i - 4000;
            } else if (i - 4000 < b)
                b = i - 4000;
        }

    std::sort(d, d + n);

    printf("%d\n", (int)floor(p / (double)n + 0.5));
    printf("%d\n", d[n / 2]);
    printf("%d\n", b == 4001 ? a : b);
    printf("%d", d[n - 1] - d[0]);
}
