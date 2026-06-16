//
// Created by kangdonguk on 2020/05/26.
//

// https://www.acmicpc.net/problem/11123
// 양 한마리... 양 두마리...

#include <stdio.h>

int t, h, w, dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, 1, -1}, p, nx, ny;
char s[100][101];

void f(int x, int y, int q) {
    s[x][y] = '.';
    for (int i = 0; i < 4; i++) {
        nx = x + dx[i];
        ny = y + dy[i];
        if (nx >= 0 and nx < h and ny >= 0 and ny < w)
            if (s[nx][ny] == '#')
                f(nx, ny, q);

    }
}

int main() {
    scanf("%d", &t);
    while (t--) {
        p = 0;
        scanf("%d %d", &h, &w);
        for (int i = 0; i < h; i++)
            scanf("%s", s[i]);

        for (int i = 0; i < h; i++)
            for (int j = 0; s[i][j]; j++)
                if (s[i][j] == '#')
                    f(i, j, ++p);

        printf("%d\n", p);
    }
}
