// https://www.acmicpc.net/problem/10159
// 저울

#include <cstdio>

int n, m, d[101][101];

void input() {
    scanf("%d %d", &n, &m);

    int x, y;
    while (m--) {
        scanf("%d %d", &x, &y);
        d[x][y] = 1;
    }
}

void solve() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (i == j)
                    continue;
                if (d[i][k] and d[k][j])
                    d[i][j] = 1;
            }
}

void output() {
    for (int i = 1; i <= n; i++) {
        int t = n - 1;
        for (int j = 1; j <= n; j++)
            if (d[i][j] or d[j][i])
                t--;

        printf("%d\n", t);
    }
}

int main() {
    input();
    solve();
    output();
}
