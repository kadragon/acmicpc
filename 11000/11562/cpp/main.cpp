// https://www.acmicpc.net/problem/11562
// 백양로 브레이크

#include <cstdio>
#define INF 987654321

int n, m, d[251][251];

void input() {
    int x, y, z;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            d[i][j] = i == j ? 0 : INF;

    while (m--) {
        scanf("%d %d %d", &x, &y, &z);
        d[x][y] = 0;
        d[y][x] = z == 0 ? 1 : 0;
    }
}

void solve() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (i == j)
                    continue;
                if (d[i][j] > d[i][k] + d[k][j])
                    d[i][j] = d[i][k] + d[k][j];
            }
}

void output() {
    int k, x, y;
    scanf("%d", &k);
    while (k--) {
        scanf("%d %d", &x, &y);
        printf("%d\n", d[x][y]);
    }
}

int main() {
    input();
    solve();
    output();
}
