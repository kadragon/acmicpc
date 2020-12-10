// https://www.acmicpc.net/problem/20300
// 서강근육맨

#include <algorithm>
#include <cstdio>

int main() {
    long long d[10001], n, max = 0, t, i;

    scanf("%lld", &n);
    for (int i = 0; i < n; i++)
        scanf("%lld", d + i);

    std::sort(d, d + n);

    if (n % 2)
        max = d[n - 1];

    for (i = 0; i <= n - i - 1 - n % 2; i++) {
        t = d[i] + d[n - i - 1 - n % 2];
        if (t > max)
            max = t;
    }

    printf("%lld", max);
}
