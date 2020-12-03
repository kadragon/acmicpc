// https://www.acmicpc.net/problem/2847
// 게임을 만든 동준이

#include <cstdio>

int main() {
    int n, d[101], c = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", d + i);

    for (int i = n - 1; i > 0; i--)
        if (d[i] >= d[i + 1]) {
            c += d[i] - d[i + 1] + 1;
            d[i] = d[i + 1] - 1;
        }

    printf("%d", c);
}
