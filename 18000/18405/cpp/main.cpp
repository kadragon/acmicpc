// https://www.acmicpc.net/problem/18405
// 경쟁적 전염

#include <cstdio>
#include <deque>

std::deque<std::pair<int, int>> v[1001];

int n, k, s, x, y, d[201][201], a, b, na, nb;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &d[i][j]);
            v[d[i][j]].push_back({i, j});
        }

    scanf("%d %d %d", &s, &x, &y);

    while (s--) {
        for (int i = 1; i <= k; i++) {
            int c = v[i].size();
            while (c--) {
                a = v[i].front().first, b = v[i].front().second;
                v[i].pop_front();
                for (int j = 0; j < 4; j++) {
                    na = a + dx[j], nb = b + dy[j];
                    if (!na or !nb or na > n or nb > n or d[na][nb])
                        continue;
                    d[na][nb] = d[a][b];
                    v[d[a][b]].push_back({na, nb});
                }
            }
        }
        if (d[x][y])
            break;
    }
    printf("%d", d[x][y]);
}
