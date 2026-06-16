// https://www.acmicpc.net/problem/10812
// 바구니 순서 바꾸기

#include <cstdio>

int main() {
    int d[101], n, t, b, m, e;
    scanf("%d %d", &n, &t);
    for (int i = 1; i <= n; i++)
        d[i] = i;

    while (t--) {
        scanf("%d %d %d", &b, &e, &m);

        int p[e - b + 1];
        for (int i = 0; i < e - b + 1; i++)
            p[i] = m + i <= e ? d[m + i] : d[(m + i) % e + b - 1];

        for (int i = 0; i < e - b + 1; i++)
            d[b + i] = p[i];
    }
    for (int i = 1; i <= n; i++)
        printf("%d ", d[i]);
    printf("\n");
}
