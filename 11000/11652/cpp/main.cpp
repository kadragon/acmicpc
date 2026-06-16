// https://www.acmicpc.net/problem/11652
// 카드

#include <algorithm>
#include <cstdio>

int main() {
    long long d[100001];
    int n, c = 1, mc = 1, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%lld", d + i);

    std::sort(d, d + n);

    for (int i = 1; i < n; i++) {
        if (d[i - 1] == d[i]) {
            c++;
        } else {
            if (c > mc) {
                max = i - 1;
                mc = c;
            }
            c = 1;
        }
    }
    if (c > mc)
        max = n - 1;

    printf("%lld", d[max]);
}