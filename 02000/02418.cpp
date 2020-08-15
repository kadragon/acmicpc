// https://www.acmicpc.net/problem/2418
// 단어 격자

#include <cstdio>

char s[203][203];
int h, w, l;
long long a[202][202][101], ans;
bool v[202][202][101];
char t[101];
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void input() {
    scanf("%d %d %d", &h, &w, &l);
    for (int i = 1; i <= h; i++)
        scanf("%s", &s[i][1]);
    scanf("%s", t);
}

long long f(int x, int y, int dep) {
    if (dep == l)
        return 1;
    if (v[x][y][dep])
        return a[x][y][dep];

    int nx, ny;
    for (int i = 0; i < 8; i++) {
        nx = x + dx[i], ny = y + dy[i];
        if (!nx or !ny or nx > h or ny > w)
            continue;
        if (s[nx][ny] == t[dep])
            a[x][y][dep] += f(x + dx[i], y + dy[i], dep + 1);
    }

    v[x][y][dep] = 1;
    return a[x][y][dep];
}

void solve() {
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if (s[i][j] == t[0])
                ans += f(i, j, 1);
        }
    }
    printf("%lld", ans);
}

int main() {
    input();
    solve();
}
