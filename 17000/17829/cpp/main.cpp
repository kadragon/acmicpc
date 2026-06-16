// https://www.acmicpc.net/problem/17829
// 222-풀링

#include <algorithm>
#include <cstdio>

int main() {
    int n, d[1025][1025], t[4];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &d[i][j]);

    while (n > 1) {
        for (int i = 1; i <= n; i = i + 2)
            for (int j = 1; j <= n; j = j + 2) {
                t[0] = d[i][j], t[1] = d[i + 1][j], t[2] = d[i][j + 1], t[3] = d[i + 1][j + 1];
                std::sort(t, t + 4);

                d[(i + 1) / 2][(j + 1) / 2] = t[2];
            }
        n /= 2;
    }

    printf("%d", d[1][1]);
}
