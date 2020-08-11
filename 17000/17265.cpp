// https://www.acmicpc.net/problem/17265
// 나의 인생에는 수학과 함께

#include <cstdio>
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define INF 987654321;

int n;
char d[7][7], t[10];
int a[7][7], b[7][7];

void input() {
    scanf("%d\n", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%1c ", &d[i][j]);
}

int cal(int a, char o, char b) {
    int y = b - '0';
    switch (o) {
    case '+':
        return a + y;
    case '-':
        return a - y;
    case '*':
        return a * y;
    }
    return -1;
}

void solve() {
    int x, y, p, q;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            if (d[i][j] < '0')
                continue;
            if (i == 1 or j == 1) {
                if (i == 1 and j == 1)
                    a[i][j] = b[i][j] = d[i][j] - '0';
                else if (i == 1) {
                    a[i][j] = b[i][j] = cal(a[i][j - 2], d[i][j - 1], d[i][j]);
                } else if (j == 1) {
                    a[i][j] = b[i][j] = cal(a[i - 2][j], d[i - 1][j], d[i][j]);
                }
            } else {
                x = i - 2 > 0 ? cal(a[i - 2][j], d[i - 1][j], d[i][j]) : -INF;
                y = j - 2 > 0 ? cal(a[i][j - 2], d[i][j - 1], d[i][j]) : -INF;
                p = cal(a[i - 1][j - 1], d[i][j - 1], d[i][j]);
                q = cal(a[i - 1][j - 1], d[i - 1][j], d[i][j]);
                a[i][j] = max(max(max(x, y), p), q);

                x = i - 2 > 0 ? cal(b[i - 2][j], d[i - 1][j], d[i][j]) : INF;
                y = j - 2 > 0 ? cal(b[i][j - 2], d[i][j - 1], d[i][j]) : INF;
                p = cal(b[i - 1][j - 1], d[i][j - 1], d[i][j]);
                q = cal(b[i - 1][j - 1], d[i - 1][j], d[i][j]);
                b[i][j] = min(min(min(x, y), p), q);
            }
        }
}

void output() {
    printf("%d %d", a[n][n], b[n][n]);
}

int main() {
    input();
    solve();
    output();
}
