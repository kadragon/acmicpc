// https://www.acmicpc.net/problem/4485
// 녹색 옷 입은 애가 젤다지?

#include <cstdio>
#include <queue>
#include <stdlib.h>

#define INF 987654321;

using namespace std;

int n, d[126][126], a[126][126], g = 1;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void input() {
    scanf("%d", &n);
    if (!n)
        exit(0);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &d[i][j]);
            a[i][j] = INF;
        }
}

void solve() {
    int cost, x, y, nx, ny;
    priority_queue<pair<int, pair<int, int>>> pq;
    pq.push({-d[1][1], {1, 1}});
    a[1][1] = d[1][1];

    while (!pq.empty()) {
        cost = -pq.top().first;
        x = pq.top().second.first, y = pq.top().second.second;

        pq.pop();

        if (x == n and y == n) {
            printf("Problem %d: %d\n", g++, cost);
            return;
        }

        if (a[x][y] < cost)
            continue;

        for (int i = 0; i < 4; i++) {
            nx = x + dx[i], ny = y + dy[i];
            if (!nx or !ny or nx > n or ny > n)
                continue;
            if (a[nx][ny] > a[x][y] + d[nx][ny]) {
                a[nx][ny] = a[x][y] + d[nx][ny];
                pq.push({-a[nx][ny], {nx, ny}});
            }
        }
    }
}

int main() {
    while (true) {
        input();
        solve();
    }
}