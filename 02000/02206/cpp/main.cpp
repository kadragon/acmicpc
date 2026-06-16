// https://www.acmicpc.net/problem/2206
// 벽 부수고 이동하기

#include <cstdio>
#include <queue>

typedef struct {
    int x, y, k, r;
} place;

int d[1002][1002], n, m;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
bool visited[1002][1002][2];

void input() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%1d", &d[i][j]);
}

int solve() {
    std::queue<place> q;
    int x, y, k, r, nx, ny;
    q.push({1, 1, 2, 1});
    d[1][1] = 2;
    visited[1][1][1] = true;
    while (!q.empty()) {
        x = q.front().x, y = q.front().y, k = q.front().k, r = q.front().r;
        q.pop();

        if (x == n and y == m)
            return k - 1;

        for (int i = 0; i < 4; i++) {
            nx = x + dx[i], ny = y + dy[i];
            if (!nx or !ny or nx > n or ny > m)
                continue;

            if (!d[nx][ny] and !visited[nx][ny][r]) {
                q.push({nx, ny, k + 1, r});
                visited[nx][ny][r] = true;
            }

            if (d[nx][ny] == 1 and r and !visited[nx][ny][0]) {
                q.push({nx, ny, k + 1, 0});
                visited[nx][ny][0] = true;
            }
        }
    }

    return -1;
}

int main() {
    input();
    printf("%d", solve());
}