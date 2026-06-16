//
// Created by kangdonguk on 2020/05/13.
//

// https://www.acmicpc.net/problem/5533
// 색종이

#include <stdio.h>

int a[101][101], c;

int main() {
    int t, x, y;
    scanf("%d", &t);

    while(t--) {
        scanf("%d %d", &x, &y);
        for (int i = x; i < x + 10; i++)
            for (int j = y; j < y + 10; j++)
                if (!a[i][j])
                    c++, a[i][j] = 1;
    }
    printf("%d", c);
}