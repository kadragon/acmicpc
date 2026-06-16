//
// Created by kangdonguk on 2020/05/26.
//

// https://www.acmicpc.net/problem/2669
// 직사각형 네개의 합집합의 면적 구하기

#include <stdio.h>

int a[101][101], x1, y1, x2, y2, t = 4, b;

int main() {
    while (t--) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (int i = x1; i < x2; i++)
            for (int j = y1; j < y2; j++)
                if (!a[i][j])
                    a[i][j] = 1, b++;
    }

    printf("%d", b);
}
