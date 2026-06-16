// https://www.acmicpc.net/problem/9205
// 맥주 마시면서 걸어가기

#include <cstdio>

#define INF 987654321

int n, d[103][2], p[103][103];

int abs(int a, int b) {
    int t = a > b ? a - b : b - a;
    return t > 0 ? t : -t;
}

void input() {
    scanf("%d", &n);
    for (int i = 1; i <= n + 2; i++) {
        scanf("%d %d", &d[i][0], &d[i][1]);
        for (int j = 1; j <= n + 2; j++)
            p[i][j] = INF;
    }
    for (int i = 1; i <= n + 2; i++) {
        for (int j = i + 1; j <= n + 2; j++)
            if (abs(d[i][0], d[j][0]) + abs(d[i][1], d[j][1]) <= 1000)
                p[i][j] = p[j][i] = 1;
    }
}

void solve() {
    for (int k = 1; k <= n + 2; k++)
        for (int i = 1; i <= n + 2; i++)
            for (int j = 1; j <= n + 2; j++) {
                if (i == j)
                    continue;
                if (p[i][k] and p[k][j]) {
                    if (p[i][j] > p[i][k] + p[k][j])
                        p[i][j] = p[i][k] + p[k][j];
                }
            }
}

void output() {
    printf("%s\n", p[1][n + 2] != INF ? "happy" : "sad");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        input();
        solve();
        output();
    }
}
