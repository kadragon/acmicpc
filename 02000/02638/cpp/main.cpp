// https://www.acmicpc.net/problem/2638
// 치즈

#include <cstdio>
#include <queue>

int n, m, d[102][102], count, ans, visited[102][102], check[102][102];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void input() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            scanf("%d", &d[i][j]);
            if (d[i][j])
                count++;
        }
}

void molt(int x, int y) {
    std::queue<std::pair<int, int>> q;
    q.push({x, y});
    while (!q.empty()) {
        x = q.front().first, y = q.front().second;
        q.pop();
        if (visited[x][y])
            continue;

        visited[x][y] = 1;
        int nx, ny;
        for (int i = 0; i < 4; i++) {
            nx = x + dx[i], ny = y + dy[i];
            if (!nx or !ny or nx > n or ny > m or visited[nx][ny])
                continue;
            if (d[nx][ny]) {
                check[nx][ny]++;
                if (check[nx][ny] >= 2) {
                    d[nx][ny] = 0;
                    visited[nx][ny] = 1;
                    count--;
                }
            } else
                q.push({nx, ny});
        }
    }
}

void solve() {
    while (count) {
        ans++;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                check[i][j] = visited[i][j] = 0;

        for (int i = 1; i <= n; i++) {
            if (!visited[i][1] && !d[i][1])
                molt(i, 1);
            if (!visited[i][m] && !d[i][m])
                molt(i, m);
        }

        for (int i = 1; i <= m; i++) {
            if (!visited[1][i] && !d[1][i])
                molt(1, i);
            if (!visited[n][i] && !d[n][i])
                molt(n, i);
        }
    }
}

void output() {
    printf("%d", ans);
}

int main() {
    input();
    solve();
    output();
}
