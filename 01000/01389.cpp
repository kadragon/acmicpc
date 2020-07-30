// https://www.acmicpc.net/problem/1389
// 케빈 베이컨의 6단계 법칙

#include <cstdio>

int n, m, d[101][101], t[101];

void input() {
    int x, y;
    scanf("%d %d", &n, &m);

    while (m--) {
        scanf("%d %d", &x, &y);
        d[x][y] = d[y][x] = 1;
    }
}

void solve() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (i == j)
                    continue;
                if (d[i][k] and d[k][j]) {
                    if ((d[i][j] > d[i][k] + d[k][j]) or !d[i][j])
                        d[i][j] = d[i][k] + d[k][j];
                }
            }
}

int output() {
    int min_person = 1, min_k = 987654321;
    for (int i = 1; i <= n; i++) {
        int t = 0;
        for (int j = 1; j <= n; j++)
            t += d[i][j];
        if (min_k > t)
            min_person = i, min_k = t;
    }

    return min_person;
}

int main() {
    input();
    solve();
    printf("%d", output());
}
