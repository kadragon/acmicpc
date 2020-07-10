// https://www.acmicpc.net/problem/1992
// 쿼드트리

#include <stdio.h>

int d[64][64], n;

void f(int x, int y, int l) {
    int p = d[x][y];
    for (int i = 0; i < l and p != 2; i++)
        for (int j = 0; j < l and p != 2; j++)
            if (p != d[x + i][y + j])
                p = 2;

    if (p == 2 and l / 2 > 0) {
        printf("(");
        f(x, y, l / 2);
        f(x, y + l / 2, l / 2);
        f(x + l / 2, y, l / 2);
        f(x + l / 2, y + l / 2, l / 2);
        printf(")");
    } else {
        printf("%d", p);
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%1d", &d[i][j]);

    f(0, 0, n);
}