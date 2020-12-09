// https://www.acmicpc.net/problem/12015
// 가장 긴 증가하는 부분 수열 2

#include <cstdio>

int n, d[1000001], l, t;

int find(int s, int e) {
    int m = (s + e) / 2;

    if (t <= d[m] and t > d[m - 1])
        return m;

    return t < d[m] ? find(s, m - 1) : find(m + 1, e);
}

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        if (t > d[l])
            d[++l] = t;
        else
            d[find(1, l)] = t;
    }

    printf("%d", l);
}
