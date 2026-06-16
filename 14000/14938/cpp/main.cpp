// https://www.acmicpc.net/problem/14938
// 서강그라운드

#include <cstdio>

int n, m, r, d[101], a, b, l, path[101][101], max;

int main() {
    scanf("%d %d %d", &n, &m, &r);
    for (int i = 1; i <= n; i++)
        scanf("%d", d + i);

    while (r--) {
        scanf("%d %d %d", &a, &b, &l);
        path[a][b] = path[b][a] = l;
    }

    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (i == j)
                    continue;

                if (path[i][k] and path[k][j]) {
                    if (!path[i][j] or path[i][j] > path[i][k] + path[k][j])
                        path[i][j] = path[i][k] + path[k][j];
                }
            }

    for (int i = 1; i <= n; i++) {
        int t = d[i];
        for (int j = 1; j <= n; j++)
            if (path[i][j] <= m and path[i][j])
                t += d[j];

        if (t > max)
            max = t;
    }

    printf("%d", max);
}
