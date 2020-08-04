// https://www.acmicpc.net/problem/1103
// 게임

#include <cstdio>
#include <stdlib.h>

#define max(a, b) (a) > (b) ? (a) : (b)

char s[51][51];
int n, m, dp[51][51], visited[51][51];
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

void input() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%s", s[i]);
}

int solve(int x, int y) {
    if (x < 0 or y < 0 or x >= n or y >= m or s[x][y] == 'H')
        return 0;

    if (visited[x][y]) {
        printf("-1");
        exit(0);
    }

    if (dp[x][y])
        return dp[x][y];

    visited[x][y] = 1;
    int nx, ny, len;
    for (int i = 0; i < 4; i++) {
        len = s[x][y] - '0';
        nx = x + dx[i] * len, ny = y + dy[i] * len;
        dp[x][y] = max(dp[x][y], solve(nx, ny) + 1);
    }
    visited[x][y] = 0;

    return dp[x][y];
}

int main() {
    input();
    printf("%d", solve(0, 0));
}

// https://lcs11244.tistory.com/63