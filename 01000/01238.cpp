// https://www.acmicpc.net/problem/1238
// 파티

#define INF 987654321

#include <cstdio>

int n, m, x;
int d[1001][1001], a[1001][1001];

void input() {
    scanf("%d %d %d", &n, &m, &x);
    int s, e, k;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = d[i][j] = (i == j ? 0 : INF);

    while (m--) {
        scanf("%d %d %d", &s, &e, &k);
        a[s][e] = d[s][e] = k;
    }
}

void floydWarshall() {
    for (int t = 1; t <= n; t++)
        for (int s = 1; s <= n; s++)
            for (int e = 1; e <= n; e++)
                if (a[s][e] > a[s][t] + a[t][e])
                    a[s][e] = a[s][t] + a[t][e];
}

void output() {
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (ans < a[x][i] + a[i][x])
            ans = a[x][i] + a[i][x];
    }
    printf("%d", ans);
}

int main() {
    input();
    floydWarshall();
    output();
}