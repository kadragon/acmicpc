//
// Created by kangdonguk on 2020/04/03.
//

// https://www.acmicpc.net/problem/11053
// 가장 긴 증가하는 부분 수열

#define max(a, b) ((a) > (b) ? (a) : (b))

#include <stdio.h>

int a[1001], d[1001];

int main() {
    int n, m = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", a + i);
        d[i] = 1;

        for (int j = 1; j < i; j++)
            if (a[j] < a[i])
                d[i] = max(d[i], d[j] + 1);

        m = max(m, d[i]);
    }

    printf("%d", m);
}