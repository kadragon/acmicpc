// https://www.acmicpc.net/problem/14502
// 연구소

#include <cstdio>
#include <queue>
#include <string.h>

int n, m, d[10][10], c[10][10], o, max_v;
std::queue<std::pair<int, int>> vq, tq;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void input() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            scanf("%d", &d[i][j]);
            if (d[i][j] == 2)
                vq.push({i, j});
            else if (d[i][j] == 0)
                o++;
        }
}

void solve() {
    memcpy(c, d, sizeof(d));
    tq = vq;
    int convert = o - 3, x, y, nx, ny;

    while (!tq.empty()) {
        x = tq.front().first, y = tq.front().second;
        tq.pop();

        for (int i = 0; i < 4; i++) {
            nx = x + dx[i], ny = y + dy[i];
            if (!nx or !ny or nx > n or ny > m)
                continue;
            if (!c[nx][ny]) {
                c[nx][ny] = 2;
                tq.push({nx, ny});
                convert--;
            }
        }
        if (max_v > convert)
            return;
    }

    max_v = convert;
}

void make_wall(int wall) {
    if (wall == 3) {
        solve();
        return;
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (d[i][j] == 0) {
                d[i][j] = 1;
                make_wall(wall + 1);
                d[i][j] = 0;
            }
}

int main() {
    input();
    make_wall(0);
    printf("%d", max_v);
}
