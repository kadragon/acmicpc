// https://www.acmicpc.net/problem/1182
// 부분수열의 합

#include <algorithm>
#include <cstdio>

int d[21], n, s, a;

void f(int k, int p) {
    if (p + d[k] == s)
        a++;
    if (k == n - 1)
        return;
    f(k + 1, p + d[k]);
    f(k + 1, p);
}

int main() {
    scanf("%d %d", &n, &s);
    for (int i = 0; i < n; i++)
        scanf("%d", d + i);

    std::sort(d, d + n);

    f(0, 0);

    printf("%d", a);
}

/**
 * Referense
 * https://velog.io/@funhan/1182번-부분수열의-합
 */