// https://www.acmicpc.net/problem/2610
// 회의준비

#include <algorithm>
#include <cstdio>

int n, d[101][101], committee = 0, master[101];

void input() {
    int m, x, y;
    scanf("%d %d", &n, &m);
    while (m--) {
        scanf("%d %d", &x, &y);
        d[x][y] = d[y][x] = 1;
    }
}

void solve() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (i == j)
                    continue;
                if (d[i][k] and d[k][j])
                    if ((d[i][j] > d[i][k] + d[k][j]) or !d[i][j])
                        d[i][j] = d[i][k] + d[k][j];
            }

    int len[101] = {0};
    bool visited[101] = {false};

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (len[i] < d[i][j])
                len[i] = d[i][j];

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            committee++, master[committee] = i;
            for (int j = 1; j <= n; j++) {
                if (d[i][j] or i == j) {
                    visited[j] = true;
                    if (len[master[committee]] > len[j])
                        master[committee] = j;
                }
            }
        }
    }

    std::sort(master, master + committee + 1);
}

void output() {
    printf("%d\n", committee);

    for (int i = 1; i <= committee; i++)
        printf("%d\n", master[i]);
}

int main() {
    input();
    solve();
    output();
}