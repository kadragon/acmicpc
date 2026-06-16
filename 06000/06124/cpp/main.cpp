// https://www.acmicpc.net/problem/6124
// Good Grass

#include <cstdio>

int r, c, d[102][102], t;

void input() {
    scanf("%d %d", &r, &c);
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++) {
            scanf("%d", &t);
            for (int x = i - 2; x <= i; x++)
                for (int y = j - 2; y <= j; y++) {
                    if (x < 1 or y < 1)
                        continue;
                    d[x][y] += t;
                }
        }
}

void solve() {
    int x = 0, y = 0;
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
            if (d[x][y] < d[i][j])
                x = i, y = j;

    printf("%d\n%d %d", d[x][y], x, y);
}

int main() {
    input();
    solve();
}
