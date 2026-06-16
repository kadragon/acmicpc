//
// Created by kangdonguk on 2020/04/21.
//

// https://www.acmicpc.net/problem/4963
// 섬의 개수

#include <stdio.h>

int a[52][52], w = -1, h = -1;
int p[3] = {-1, 0, 1};

void ch(int x, int y, int c) {
    int nx, ny;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            nx = x + p[i];
            ny = y + p[j];

            if (a[nx][ny] == 1) {
                a[nx][ny] = c;
                ch(nx, ny, c);
            }
        }
}

int main() {
    while (scanf("%d %d", &w, &h) and w * h != 0) {
        int ans = 1;
        for (int i = 1; i <= h + 1; i++)
            for (int j = 1; j <= w + 1; j++)
                if (i == h + 1 or j == w + 1)
                    a[i][j] = 0;
                else
                    scanf("%d", &a[i][j]);

        for (int i = 1; i <= h; i++)
            for (int j = 1; j <= w; j++)
                if (a[i][j] == 1)
                    ch(i, j, ++ans);

        printf("%d\n", ans - 1);
    }
}