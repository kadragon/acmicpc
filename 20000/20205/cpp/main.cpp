// https://www.acmicpc.net/problem/20205
// 교수님 그림이 깨지는데요?

#include <cstdio>

int main() {
    int i, j, n, k, d[101][101], p;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            scanf("%d", &p);
            for (int x = 0; x < k; x++)
                for (int y = 0; y < k; y++)
                    d[i * k + x][j * k + y] = p;
        }

    for (i = 0; i < n * k; i++, printf("\n"))
        for (j = 0; j < n * k; j++)
            printf("%d ", d[i][j]);
}
