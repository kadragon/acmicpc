//
// Created by kangdonguk on 2020/03/09.
//

// https://www.acmicpc.net/problem/2579
// 계단 오르기

#define max(a, b) ((a) > (b) ? (a) : (b))

#include <stdio.h>

int n, m = 0;
int arr[301];
int v[301][2];

void floor(int i, int sum, int one) {
    if (v[i][one] < sum)
        v[i][one] = sum;
    else
        return;

    if (n == i) {
        m = max(m, sum);
        return;
    }

    if (one < 1)
        floor(i + 1, sum + arr[i + 1], 1);
    if (i + 2 <= n)
        floor(i + 2, sum + arr[i + 2], 0);
}


int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);

    floor(1, arr[1], 0);
    floor(2, arr[2], 0);

    printf("%d", m);

    return 0;
}