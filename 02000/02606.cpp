//
// Created by kangdonguk on 2020/03/29.
//

// https://www.acmicpc.net/problem/2606
// 바이러스

#include <stdio.h>

int a[101][101], ans, c[101], k;

void check(int n) {
    if (c[n] == 1)
        return;

    c[n] = 1;

    for (int i = 1; i <= k; i++)
        if (a[n][i] == 1 and c[i] == 0) {
            ans++;
            check(i);
        }
}

int main() {
    int n, x, y;
    scanf("%d", &k);
    scanf("%d", &n);

    while (n--) {
        scanf("%d %d", &x, &y);
        a[x][y] = 1;
        a[y][x] = 1;
    }

    check(1);

    printf("%d", ans);
}

/*
2
1
2 1

노드 연결시 무방향성인것을 확인해야 함.
 */