//
// Created by kangdonguk on 2020/05/19.
//

// https://www.acmicpc.net/problem/1788
// 피보나치 수의 확장

#define D 1000000000

#include <stdio.h>

int main() {
    int n, k, a[] = {0, 1, 1};
    scanf("%d", &n);

    k = n ? n > 0 ? 1 : -1 : 0;

    for (int i = 3; i <= n * k; i++)
        a[i % 3] = (a[(i - 1) % 3] + a[(i - 2) % 3]) % D;

    printf("%d\n%d", k > -1 ? k : n * k % 2 ? 1 : -1, a[(n * k) % 3]);
}