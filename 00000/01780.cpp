//
// Created by kangdonguk on 2020/04/04.
//

// https://www.acmicpc.net/problem/1780
// 종이의 개수

#include <stdio.h>

int d[3 * 3 * 3 * 3 * 3 * 3 * 3][3 * 3 * 3 * 3 * 3 * 3 * 3], a[3];

void find(int x, int y, int k) {
    if (k == 0)
        return;

    for (int i = x; i < x + k; i++)
        for (int j = y; j < y + k; j++)
            if (d[x][y] != d[i][j]) {
                for (int ni = x; ni < x + k; ni += k / 3)
                    for (int nj = y; nj < y + k; nj += k / 3)
                        find(ni, nj, k / 3);
                return;
            }
    a[d[x][y] + 1] += 1;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &d[i][j]);

    find(0, 0, n);

    printf("%d\n%d\n%d", a[0], a[1], a[2]);
}