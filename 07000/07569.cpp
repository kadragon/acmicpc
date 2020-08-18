// https://www.acmicpc.net/problem/7569
// 토마토

#include <cstdio>
#include <deque>

typedef struct {
    int z, x, y, k;
} p;

std::deque<p> dq;

int m, n, h, d[102][102][102], cnt, ans;
int dx[] = {-1, 1, 0, 0, 0, 0};
int dy[] = {0, 0, -1, 1, 0, 0};
int dz[] = {0, 0, 0, 0, -1, 1};

void input() {
    scanf("%d %d %d", &m, &n, &h);
    for (int k = 1; k <= h; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++) {
                scanf("%d", &d[k][i][j]);
                if (d[k][i][j] == 1)
                    dq.push_back({k, i, j, 0});
                else if (!d[k][i][j])
                    cnt++;
            }
}

void solve() {
    int x, y, z, k, nx, ny, nz;
    while (!dq.empty()) {
        x = dq[0].x, y = dq[0].y, z = dq[0].z, ans = k = dq[0].k;
        dq.pop_front();

        for (int i = 0; i < 6; i++) {
            nx = x + dx[i], ny = y + dy[i], nz = z + dz[i];
            if (!nx or !ny or !nz or nx > n or ny > m or nz > h)
                continue;
            if (d[nz][nx][ny] == 0) {
                dq.push_back({nz, nx, ny, k + 1});
                d[nz][nx][ny] = k + 1;
                cnt--;
            }
        }
    }
}

void output() {
    printf("%d\n", cnt ? -1 : ans);
}

int main() {
    input();
    solve();
    output();
}
