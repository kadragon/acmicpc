// https://www.acmicpc.net/problem/1507
// 궁금한 민호

#include <cstdio>

int n, a[21][21], ans;

void input() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
}

void solve() {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) {
                if (i == j)
                    continue;
                if (a[i][k] and a[k][j]) {
                    if (a[i][j] == a[i][k] + a[k][j])
                        a[i][j] = 0;
                    else if (a[i][j] > a[i][k] + a[k][j]) {
                        ans = -1;
                        return;
                    }
                }
            }
}

void output() {
    for (int i = 1; i <= n and ans != -1; i++)
        for (int j = i + 1; j <= n; j++)
            ans += a[i][j];

    printf("%d", ans);
}

int main() {
    input();
    solve();
    output();
}