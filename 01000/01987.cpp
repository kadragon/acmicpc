// https://www.acmicpc.net/problem/1987
// 알파벳

#include <cstdio>

char s[21][21], visited[21][21], alpa[26];
int r, c, m;
int d[][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

void f(int x, int y, int a) {
    visited[x][y] = alpa[s[x][y] - 'A'] = 1;
    for (int i = 0; i < 4; i++) {
        int nx = x + d[i][0], ny = y + d[i][1];
        if (!(nx < 0 or nx >= r or ny < 0 or ny >= c))
            if (!visited[nx][ny] and !alpa[s[nx][ny] - 'A'])
                f(nx, ny, a + 1);
    }
    m = a > m ? a : m;
    visited[x][y] = alpa[s[x][y] - 'A'] = 0;
}

int main() {
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        scanf("%s", s[i]);

    f(0, 0, 1);

    printf("%d", m);
}