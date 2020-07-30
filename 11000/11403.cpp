// https://www.acmicpc.net/problem/11403
// 경로 찾기

#include <cstdio>

int n, d[101][101];

void input() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &d[i][j]);
}

void solve() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (d[i][k] && d[k][j])
                    d[i][j] = 1;
            }
}

void output() {
    for (int i = 1; i <= n; i++, printf("\n"))
        for (int j = 1; j <= n; j++)
            printf("%d ", d[i][j]);
}

int main() {
    input();
    solve();
    output();
}