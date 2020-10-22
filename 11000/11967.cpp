// https://www.acmicpc.net/problem/11967
// 불켜기

#include <cstdio>
#include <queue>
#include <vector>

std::vector<std::pair<int, int>> v[101][101];

int n, m, ans = 1;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};
bool visited[101][101], able[101][101], light[101][101];

void input() {
    scanf("%d %d", &n, &m);
    int a, b, x, y;
    while (m--) {
        scanf("%d %d %d %d", &a, &b, &x, &y);
        v[a][b].push_back({x, y});
    }
}

void solve() {
    able[1][1] = light[1][1] = 1;

    std::queue<std::pair<int, int>> q;
    q.push({1, 1});

    int x, y, nx, ny;
    while (!q.empty()) {
        x = q.front().first, y = q.front().second;
        q.pop();

        if (visited[x][y])
            continue;

        visited[x][y] = 1;

        for (int i = 0; i < (int)v[x][y].size(); i++) {
            nx = v[x][y][i].first, ny = v[x][y][i].second;

            if (!light[nx][ny])
                ans++, light[nx][ny] = 1;

            if (able[nx][ny])
                q.push({nx, ny});
        }

        for (int i = 0; i < 4; i++) {
            nx = x + dx[i], ny = y + dy[i];

            if (!nx or !ny or nx > n or ny > n)
                continue;

            able[nx][ny] = 1;
            if (light[nx][ny])
                q.push({nx, ny});
        }
    }

    printf("%d\n", ans);
}

int main() {
    input();
    solve();
}
