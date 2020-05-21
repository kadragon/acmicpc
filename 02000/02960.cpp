//
// Created by kangdonguk on 2020/05/13.
//

// https://www.acmicpc.net/problem/2960
// 에라토스테네스의 체

#include <stdio.h>

int a[1001], n, k;

int main() {
    scanf("%d %d", &n, &k);

    for (int i = 2; i <= n; i++)
        if (a[i] == 0)
            for (int j = 1; i * j <= n; j++)
                if (!a[i * j]) {
                    a[i * j] = 1;
                    if (k-- == 1)
                        printf("%d", i * j);
                }
}