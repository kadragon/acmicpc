// https://www.acmicpc.net/problem/16235
// 나무 재테크

#include <algorithm>
#include <cstdio>
#include <vector>

int n, m, k, d[11][11], a[11][11], c[11][11], ans;
std::vector<int> t[11][11];

void input() {

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            d[i][j] = 5, scanf("%d", &a[i][j]);

    int x, y, z;
    while (m--) {
        scanf("%d %d %d", &x, &y, &z);
        t[x][y].push_back(z);
    }
}

void solve() {
    int size, q, stop;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            stop = size = (int)t[i][j].size(), q = 0, c[i][j] = 0;
            if (!size)
                continue;

            std::sort(t[i][j].begin(), t[i][j].end());
            for (int k = 0; k < size; k++) {
                if (d[i][j] >= t[i][j][k])
                    d[i][j] -= t[i][j][k]++;
                else {
                    stop = k;
                    break;
                }
            }
            for (int k = 0; k < size - stop; k++) {
                d[i][j] += t[i][j][(int)t[i][j].size() - 1] / 2;
                t[i][j].pop_back();
            }
        }

    int dx[] = {-1, 0, 1, 1, 1, 0, -1, -1};
    int dy[] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int nx, ny;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            d[i][j] += a[i][j];

            size = (int)t[i][j].size();
            if (!size)
                continue;

            for (int p = 0; p < size; p++)
                if (!(t[i][j][p] % 5)) {
                    for (int k = 0; k < 8; k++) {
                        nx = i + dx[k], ny = j + dy[k];
                        if (!nx or !ny or nx > n or ny > n)
                            continue;
                        c[nx][ny]++;
                    }
                }
        }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            while (c[i][j]--)
                t[i][j].push_back(1);
}

void output() {
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            ans += (int)t[i][j].size();

    printf("%d\n", ans);
}

int main() {
    scanf("%d %d %d", &n, &m, &k);
    input();
    while (k--)
        solve();

    output();
}
