// https://www.acmicpc.net/problem/7576
// 토마토

#include <cstdio>
#include <queue>

using namespace std;

int d[1002][1002], c, m, n, k = 1;
int u[][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

int main() {
    scanf("%d %d", &m, &n);
    queue<pair<int, int>> q;

    for (int i = 0; i <= n + 1; i++)
        for (int j = 0; j <= m + 1; j++) {
            if (i == 0 or j == 0 or i == n + 1 or j == m + 1)
                d[i][j] = -1;
            else {
                scanf("%d", &d[i][j]);
                if (d[i][j] == 0)
                    c++;
                if (d[i][j] == 1)
                    q.push({i, j});
            }
        }

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + u[i][0], ny = y + u[i][1];
            if (d[nx][ny] == 0) {
                k = d[nx][ny] = d[x][y] + 1;
                q.push({nx, ny});
                c--;
            }
        }
    }

    printf("%d", c == 0 ? k - 1 : -1);
}