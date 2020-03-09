//
// Created by kangdonguk on 2020/03/08.
//

// https://www.acmicpc.net/problem/1932
// 정수 삼각형

#define max(a, b) ((a) > (b) ? (a) : (b))

#include <stdio.h>

int tri[501][501], ans;

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n ; i++)
        for(int j = 1; j <= i; j++) {
            scanf("%d", &tri[i][j]);
            tri[i][j] += max(tri[i-1][j-1], tri[i-1][j]);

            if (n == i)
                ans = max(ans, tri[i][j]);
        }

    printf("%d", ans);

    return 0;
}