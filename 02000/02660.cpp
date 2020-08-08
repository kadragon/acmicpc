// https://www.acmicpc.net/problem/2660
// 회장뽑기

#include <cstdio>
#include <vector>

using namespace std;

#define INF 987654321

int n, d[51][51];
vector<int> p[51];

void input() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            d[i][j] = INF;

    int x, y;
    while (true) {
        scanf("%d %d", &x, &y);
        if (x == -1 and y == -1)
            break;
        d[x][y] = d[y][x] = 1;
    }
}

void solve() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (i == j)
                    continue;
                if (d[i][k] and d[k][j])
                    if (d[i][j] > d[i][k] + d[k][j])
                        d[i][j] = d[i][k] + d[k][j];
            }
}

void output() {
    int mp = n;

    for (int i = 1; i <= n; i++) {
        int m = 0;
        for (int j = 1; j <= n; j++) {
            if (i == j)
                continue;
            if (d[i][j] > m)
                m = d[i][j];
        }

        if (mp > m)
            mp = m;

        p[m].push_back(i);
    }

    int size = (int)p[mp].size();
    printf("%d %d\n", mp, size);
    for (int i = 0; i < size; i++)
        printf("%d ", p[mp][i]);
}

int main() {
    input();
    solve();
    output();
}
