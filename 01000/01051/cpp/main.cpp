// https://www.acmicpc.net/problem/1051
// 숫자 정사각형

#include <cstdio>

int n, m, d[51][51], p, max;

int main() {
    scanf("%d %d", &n, &m);
    p = n < m ? n : m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%1d", &d[i][j]);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            for (int k = 1; k <= p; k++) {
                if (i + k > n or j + k > m)
                    break;
                if (d[i][j] == d[i + k][j] and d[i][j] == d[i][j + k] and d[i][j] == d[i + k][j + k])
                    if (max < k)
                        max = k;
            }
        }
    max++;
    printf("%d", max * max);
}
