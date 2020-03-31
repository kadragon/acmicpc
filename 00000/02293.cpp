//
// Created by kangdonguk on 2020/03/30.
//

// https://www.acmicpc.net/problem/2293
// 동전 1

#include <stdio.h>

int v[101];
int a[10001] = {1,};

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= k; j++)
            if (j - v[i] >= 0)
                a[j] += a[j - v[i]];
    }

    printf("%d", a[k]);
}