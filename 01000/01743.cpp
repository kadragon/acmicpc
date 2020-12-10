// https://www.acmicpc.net/problem/1743
// 음식물 피하기

#include <cstdio>

int n, m, k, d[101][101], max;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void input() {
    scanf("%d %d %d", &n, &m, &k);
    int a, b;
    while (k--) {
        scanf("%d %d", &a, &b);
        d[a][b] = 1;
    }
}

int find(int x, int y) {
    d[x][y] = 0;
    int c = 1, nx, ny;
    for (int i = 0; i < 4; i++) {
        nx = x + dx[i], ny = y + dy[i];
        if (d[nx][ny])
            c += find(nx, ny);
    }
    return c;
}

void solve() {
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (d[i][j]) {
                int t = find(i, j);
                if (max < t)
                    max = t;
            }
    printf("%d", max);
}

int main() {
    input();
    solve();
}
