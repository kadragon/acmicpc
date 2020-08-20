// https://www.acmicpc.net/problem/7562
// 나이트의 이동

#include <cstdio>
#include <queue>

typedef struct {
    int x, y, k;
} night;

int l, sx, sy, ex, ey;
int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

int solve() {
    bool visited[300][300] = {{
        0,
    }};
    std::queue<night> q;
    night now;
    int nx, ny;

    q.push({sx, sy, 0}), visited[sx][sy] = 1;
    while (!q.empty()) {
        now = q.front();
        q.pop();

        if (now.x == ex and now.y == ey)
            return now.k;

        for (int i = 0; i < 8; i++) {
            nx = now.x + dx[i], ny = now.y + dy[i];
            if (nx < 0 or ny < 0 or nx >= l or ny >= l)
                continue;
            if (!visited[nx][ny]) {
                q.push({nx, ny, now.k + 1});
                visited[nx][ny] = 1;
            }
        }
    }

    return -1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d %d %d %d", &l, &sx, &sy, &ex, &ey);
        printf("%d\n", solve());
    }
}
