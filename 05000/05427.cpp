// https://www.acmicpc.net/problem/5427
// 불

#include <cstdio>
#include <queue>

typedef struct {
    int x, y, k;
} place;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
char d[1003][1003];

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int w, h;
        bool visited[1003][1003] = {{
            0,
        }};
        std::queue<place> p, f;

        scanf("%d %d", &w, &h);
        for (int i = 1; i <= h; i++) {
            scanf("%s", &d[i][1]);
            for (int j = 1; j <= w; j++) {
                if (d[i][j] == '@')
                    p.push({i, j, 0});
                else if (d[i][j] == '*')
                    f.push({i, j, 0});
            }
        }

        int process = 0, x, y, k, nx, ny, end = 1;
        while (true) {
            while (!f.empty() and f.front().k == process) {
                x = f.front().x, y = f.front().y, k = f.front().k;
                f.pop();

                for (int i = 0; i < 4; i++) {
                    nx = x + dx[i], ny = y + dy[i];
                    if (!nx or !ny or nx > h or ny > w)
                        continue;

                    if (d[nx][ny] == '.' or d[nx][ny] == '@') {
                        d[nx][ny] = '*';
                        f.push({nx, ny, k + 1});
                    }
                }
            }

            while (!p.empty() and p.front().k == process and end) {
                x = p.front().x, y = p.front().y, k = p.front().k;
                p.pop();

                for (int i = 0; i < 4; i++) {
                    nx = x + dx[i], ny = y + dy[i];
                    if (!nx or !ny or nx > h or ny > w) {
                        printf("%d\n", k + 1);
                        end = 0;
                        break;
                    }
                    if (d[nx][ny] == '.' and !visited[nx][ny]) {
                        visited[nx][ny] = 1;
                        p.push({nx, ny, k + 1});
                    }
                }
            }

            if (p.empty() or !end)
                break;

            process++;
        }
        if (end)
            printf("IMPOSSIBLE\n");
    }
}