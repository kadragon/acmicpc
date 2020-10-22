// https://www.acmicpc.net/problem/9613
// GCD 합

#include <cstdio>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int t, n, d[100];
    long long ans = 0;
    scanf("%d", &t);
    while (t--) {
        ans = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", d + i);
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                ans += gcd(d[i], d[j]);

        printf("%lld\n", ans);
    }
}
