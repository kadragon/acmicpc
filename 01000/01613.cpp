// https://www.acmicpc.net/problem/1613
// 역사

#include <cstdio>

int n, k, d[401][401];

void input() {
    scanf("%d %d", &n, &k);
    int x, y;
    while (k--) {
        scanf("%d %d", &x, &y);
        d[x][y] = 1;
    }
}

void solve() {
    for (int m = 1; m <= n; m++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (i == j)
                    continue;
                if (d[i][m] and d[m][j])
                    d[i][j] = 1;
            }
}

void output() {
    int t, x, y;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &x, &y);
        printf("%d\n", d[x][y] ? -1 : d[y][x] ? 1 : 0);
    }
}

int main() {
    input();
    solve();
    output();
}