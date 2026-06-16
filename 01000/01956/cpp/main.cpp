// https://www.acmicpc.net/problem/1956
// 운동

#define INF 987654321

#include <cstdio>

int v, e, d[401][401];

void input() {
    scanf("%d %d", &v, &e);
    int x, y, k;
    while (e--) {
        scanf("%d %d %d", &x, &y, &k);
        d[x][y] = k;
    }
}

void solve() {
    for (int k = 1; k <= v; k++)
        for (int i = 1; i <= v; i++)
            for (int j = 1; j <= v; j++) {
                if (i == j)
                    continue;
                if (d[i][k] and d[k][j]) {
                    if (d[i][j] > d[i][k] + d[k][j])
                        d[i][j] = d[i][k] + d[k][j];
                }
            }
}

void output() {
    int min_len = INF, t;

    for (int i = 1; i <= v; i++)
        for (int j = 1; j <= v; j++) {
            if (i == j)
                continue;
            if (d[i][j] and d[j][i]) {
                t = d[i][j] + d[j][i];
                if (min_len > t)
                    min_len = t;
            }
        }
    printf("%d", min_len == INF ? -1 : min_len);
}

int main() {
    input();
    solve();
    output();
}
