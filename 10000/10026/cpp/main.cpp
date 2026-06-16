// https://www.acmicpc.net/problem/10026
// 적록색약

#include <iostream>

int d[102][102], n, visited[102][102], a[3];
int p[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void check(int x, int y, int mode) {
    visited[x][y] = mode;
    for (int i = 0; i < 4; i++) {
        int nx = x + p[i][0], ny = y + p[i][1];
        if (visited[nx][ny] != mode and d[nx][ny]) {
            if (mode == 1 and d[x][y] == d[nx][ny])
                check(nx, ny, mode);
            if (mode == 2 and d[x][y] / 3 == d[nx][ny] / 3)
                check(nx, ny, mode);
        }
    }
}

int main() {
    char s[101];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%s", s);
        for (int j = 1; s[j - 1]; j++)
            d[i][j] = s[j - 1] == 'R' ? 1 : s[j - 1] == 'G' ? 2 : 3;
    }

    for (int mode = 1; mode < 3; mode++) {
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (visited[i][j] != mode) {
                    a[mode]++;
                    check(i, j, mode);
                }
            }
    }

    printf("%d %d", a[1], a[2]);
}