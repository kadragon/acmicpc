//
// Created by kangdonguk on 2020/05/16.
//

// https://www.acmicpc.net/problem/5567
// 결혼식

#include <stdio.h>

int a[501][501], b[500], t;

int main() {
    int n, m, x, y;
    scanf("%d %d", &n, &m);

    while(m--) {
        scanf("%d %d", &x, &y);
        a[x][y] = a[y][x] = 1;
    }

    for (int i = 2; i <= 500; i++)
        if (a[1][i]) {
            if (!b[i])
                b[i] = 1, t++;
            for (int j = 2; j <= 500; j++)
                if (a[i][j] and !b[j])
                    b[j] = 1, t++;
        }

    printf("%d", t);
}