// https://www.acmicpc.net/problem/6593
// 상범 빌딩

#include <cstdio>
#include <deque>

using namespace std;

typedef struct {
    int z, x, y, k;
} location;

char s[51][51][51];
int l, r, c, ans;
int sl, sr, sc, finds = 0;
const int dx[] = {0, 0, 1, -1, 0, 0};
const int dy[] = {0, 0, 0, 0, 1, -1};
const int dz[] = {1, -1, 0, 0, 0, 0};

void input() {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < r; j++) {
            scanf("%s", s[i][j]);
            for (int k = 0; s[i][j][k] and !finds; k++) {
                if (s[i][j][k] == 'S')
                    sl = i, sr = j, sc = k, finds = 1;
            }
        }
    }
}

void solve() {
    int nz, nx, ny;
    deque<location> dq;

    dq.push_back({sl, sr, sc, 0});
    s[sl][sr][sc] = '#';

    while (!dq.empty()) {
        for (int i = 0; i < 6; i++) {
            nz = dq[0].z + dz[i], nx = dq[0].x + dx[i], ny = dq[0].y + dy[i];

            if (nx < 0 or ny < 0 or nz < 0 or nx >= r or ny >= c or nz >= l)
                continue;
            if (s[nz][nx][ny] == '#')
                continue;
            if (s[nz][nx][ny] == 'E') {
                ans = dq[0].k + 1;
                return;
            }

            s[nz][nx][ny] = '#';
            dq.push_back({nz, nx, ny, dq[0].k + 1});
        }
        dq.pop_front();
    }
}

void output() {
    if (ans != -1)
        printf("Escaped in %d minute(s).\n", ans);
    else
        printf("Trapped!\n");
}

int main() {

    while (true) {
        finds = 0, ans = -1;

        scanf("%d %d %d", &l, &r, &c);
        if (!(l and r and c))
            break;

        input();
        solve();
        output();
    }
}
