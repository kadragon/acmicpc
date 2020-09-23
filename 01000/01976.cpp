// https://www.acmicpc.net/problem/1976
// 여행 가자

#include <cstdio>

int n, m, d[201][201], p[1001];

void input() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &d[i][j]);
}

void solve() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (i == j)
                    d[i][j] = 1;
                if (d[i][k] && d[k][j])
                    d[i][j] = 1;
            }
}

void output() {
    for (int i = 1; i <= m; i++) {
        scanf("%d", p + i);
        if (i == 1)
            continue;
        if (!d[p[i]][p[i - 1]]) {
            printf("NO");
            return;
        }
    }
    printf("YES");
}

int main() {
    input();
    solve();
    output();
}
