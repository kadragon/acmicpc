// https://www.acmicpc.net/problem/3184
// 양

#include <cstdio>

int r, c, a, b;
int p[][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
char t[252][252];

void f(int x, int y, int w[]) {
    if (t[x][y] == 'o')
        w[0]++;
    else if (t[x][y] == 'v')
        w[1]++;
    t[x][y] = '#';

    for (int i = 0; i < 4; i++) {
        int nx = x + p[i][0], ny = y + p[i][1];
        if (nx < 0 or nx >= r or ny < 0 or ny >= c)
            continue;

        if (t[nx][ny] != '#')
            f(nx, ny, w);
    }
}

int main() {
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        scanf("%s", t[i]);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            if (t[i][j] != '#') {
                int w[2] = {0, 0};
                f(i, j, w);
                if (w[0] > w[1])
                    a += w[0];
                else
                    b += w[1];
            }
        }

    printf("%d %d", a, b);
}
