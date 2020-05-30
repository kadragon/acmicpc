//
// Created by kangdonguk on 2020/05/30.
//

// https://www.acmicpc.net/problem/2583
// 영역 구하기

#include <stdio.h>
#include <algorithm>

int a[100][100], m, n, k, t = 2, x1, y1, x2, y2, p[5000], dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, 1, -1}, nx, ny;

void f(int x, int y, int o) {
    a[x][y] = o, p[o]++;
    for (int i = 0; i < 4; i++) {
        nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 and nx < m and ny >= 0 and ny < n)
            if (a[nx][ny] == 0)
                f(nx, ny, o);
    }
}

int main() {
    scanf("%d %d %d", &m, &n, &k);
    while (k--) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (int i = y1; i < y2; i++)
            for (int j = x1; j < x2; j++)
                a[i][j] = 1;
    }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (!a[i][j])
                f(i, j, t++);

    std::sort(p + 2, p + t);

    printf("%d\n", t - 2);
    for (int i = 2; i < t; i++)
        printf("%d ", p[i]);
}
