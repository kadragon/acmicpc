//
// Created by kangdonguk on 2020/05/14.
//

// https://www.acmicpc.net/problem/11722
// 가장 긴 감소하는 부분 수열

#include <stdio.h>

int main() {
    int n, a[1001], d[1001], k = 0, i, j;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", a + i);
        ;
        for (j = 0, d[i] = 1; j < i; j++) {
            if (a[j] > a[i] and d[i] < d[j] + 1)
                d[i] = d[j] + 1;
        }

        if (d[i] > k)
            k = d[i];
    }

    printf("%d", k);
}