// https://www.acmicpc.net/problem/13565
// 침투

#include <cstdio>
#include <deque>

using namespace std;

int m, n, d[1002][1002], pass = 0;
int p[][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

void input() {
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            scanf("%1d", &d[i][j]);
}

void solve() {
    deque<pair<int, int>> dq;
    int nx, ny;

    for (int y = 1, x = 1; y <= n; y++) {
        if (d[1][y] != 0)
            continue;

        dq.push_back({1, y});
        d[1][y] = 2;

        while (!dq.empty()) {
            x = dq[0].first, y = dq[0].second;
            dq.pop_front();

            for (int i = 0; i < 4; i++) {
                nx = x + p[i][0], ny = y + p[i][1];
                if (nx == 0 or ny == 0 or nx > m or ny > n)
                    continue;

                if (!d[nx][ny]) {
                    dq.push_back({nx, ny});
                    d[nx][ny] = 2;
                    if (nx == m) {
                        pass = 1;
                        return;
                    }
                }
            }
        }
    }
}

void output() {
    printf("%s", pass ? "YES" : "NO");
}

int main() {
    input();
    solve();
    output();
}
