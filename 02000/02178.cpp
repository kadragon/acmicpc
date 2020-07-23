// https://www.acmicpc.net/problem/2178
// 미로 탐색

#include <cstdio>
#include <deque>

using namespace std;

typedef struct MIRO {
    int x, y, c;
} miro;

int a[102][102], n, m;
int d[][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

void bfs(int x, int y) {
    deque<miro> p;
    int c = 2;
    p.push_back((miro){x, y, c}), a[x][y] = c;
    while (!p.empty()) {
        x = p[0].x, y = p[0].y, c = p[0].c + 1;
        p.pop_front();
        for (int i = 0; i < 4; i++) {
            int nx = x + d[i][0], ny = y + d[i][1];
            if (a[nx][ny] == 1)
                p.push_back((miro){nx, ny, c}), a[nx][ny] = c;
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%1d", &a[i][j]);

    bfs(1, 1);

    printf("%d", a[n][m] - 1);
}