// https://www.acmicpc.net/problem/1600
// 말이 되고픈 원숭이

#include <cstdio>
#include <deque>

using namespace std;

typedef struct {
    int x, y, r;
} place;

int k, w, h, d[201][201], a[201][201][31];
int dx[] = {0, 0, -1, 1, 1, 2, 2, 1, -1, -2, -2, -1};
int dy[] = {-1, 1, 0, 0, 2, 1, -1, -2, -2, -1, 1, 2};

void input() {
    scanf("%d %d %d", &k, &w, &h);
    for (int i = 1; i <= h; i++)
        for (int j = 1; j <= w; j++)
            scanf("%d", &d[i][j]);
}

bool vaild(int x, int y, int r) {
    if (x < 1 or y < 1 or x > h or y > w)
        return false;
    if (d[x][y] == 1)
        return false;
    if (a[x][y][r])
        return false;
    return true;
}

void solve() {
    deque<place> p;
    p.push_back({h, w, k});
    a[h][w][k] = 1;

    int x, y, r, nx, ny, rt;
    while (!p.empty()) {
        x = p[0].x, y = p[0].y, r = p[0].r;
        p.pop_front();

        if (x == 1 and y == 1) {
            printf("%d", a[x][y][r] - 1);
            return;
        }

        for (int i = 0; i < 12; i++) {
            if (i >= 4 and r == 0)
                break;
            rt = i < 4 ? r : r - 1;
            nx = x + dx[i], ny = y + dy[i];

            if (!vaild(nx, ny, rt))
                continue;

            a[nx][ny][rt] = a[x][y][r] + 1;
            p.push_back({nx, ny, rt});
        }
    }
    printf("-1");
}

int main() {
    input();
    solve();
}
