// https://www.acmicpc.net/problem/10810
// 공 넣기

#include <cstdio>

int main() {
    int d[101] = {0}, n, m, a[100][3];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++)
        scanf("%d %d %d", a[i], a[i] + 1, a[i] + 2);

    for (int i = m - 1, c = n; i >= 0 and c > 0; i--)
        for (int j = a[i][0]; j <= a[i][1]; j++)
            if (!d[j])
                d[j] = a[i][2], c--;

    for (int i = 1; i <= n; i++)
        printf("%d ", d[i]);
}