// https://www.acmicpc.net/problem/3055
// 탈출

#include <cstdio>
#include <queue>

typedef struct {
    int x, y, k;
} node;

int r, c;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
char s[52][52];
bool visited[52][52];
std::queue<node> a, w;

void input() {
    scanf("%d %d", &r, &c);
    for (int i = 1; i <= r; i++) {
        scanf("%s", &s[i][1]);
        for (int j = 1; j <= c; j++) {
            if (s[i][j] == 'S') {
                a.push({i, j, 0});
                visited[i][j] = 1;
            } else if (s[i][j] == '*')
                w.push({i, j, 0});
        }
    }
}

void solve() {
    int p = 0, x, y, k, nx, ny;
    while (!a.empty()) {
        if (!w.empty()) {
            while (p == w.front().k) {
                x = w.front().x, y = w.front().y, k = w.front().k;
                w.pop();
                for (int i = 0; i < 4; i++) {
                    nx = x + dx[i], ny = y + dy[i];
                    if (!nx or !ny or nx > r or ny > c)
                        continue;
                    if (s[nx][ny] == '.' or s[nx][ny] == 'S') {
                        s[nx][ny] = '*';
                        w.push({nx, ny, k + 1});
                    }
                }
            }
        }
        while (p == a.front().k) {
            x = a.front().x, y = a.front().y, k = a.front().k;
            a.pop();
            for (int i = 0; i < 4; i++) {
                nx = x + dx[i], ny = y + dy[i];
                if (!nx or !ny or nx > r or ny > c)
                    continue;
                if (s[nx][ny] == 'D') {
                    printf("%d", k + 1);
                    return;
                }
                if (s[nx][ny] == '.' and !visited[nx][ny]) {
                    a.push({nx, ny, k + 1});
                    visited[nx][ny] = 1;
                }
            }
        }
        p++;
    }
    printf("%s", "KAKTUS");
}

int main() {
    input();
    solve();
}
