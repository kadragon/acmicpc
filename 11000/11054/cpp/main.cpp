//
// Created by kangdonguk on 2020/05/14.
//

// https://www.acmicpc.net/problem/11054
// 가장 긴 바이토닉 부분 수열

#include <stdio.h>

int main() {
    int n, d[1000], a[1000], b[1000], k = 0, i, j;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", d + i);

    for (i = 0; i < n; i++) {
        for (j = 0, a[i] = 1; j < i; j++)
            if (d[j] < d[i] and a[i] < a[j] + 1)
                a[i] = a[j] + 1;
    }

    for (i = n - 1; i >= 0; i--) {
        for (j = n - 1, b[i] = 1; j > i; j--)
            if (d[j] < d[i] and b[i] < b[j] + 1)
                b[i] = b[i] + 1;
    }

    for (i = 0; i < n; i++)
        if (k < a[i] + b[i] - 1)
            k = a[i] + b[i] - 1;

    printf("%d", k);
}