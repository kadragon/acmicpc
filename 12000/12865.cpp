//
// Created by kangdonguk on 2020/03/29.
//

// https://www.acmicpc.net/problem/12865
// 평범한 배낭

#define max(a, b) ((a) > (b) ? (a) : (b))

#include <stdio.h>

int arr[101][2], ans[101][100001];

int opt(int n, int w) {
    if (n == 0 || w <= 0)
        return 0;

    if (ans[n][w])
        return ans[n][w];

    return ans[n][w] = max(opt(n - 1, w), w - arr[n][0] >= 0 ? opt(n - 1, w - arr[n][0]) + arr[n][1] : 0);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++)
        scanf("%d %d", &arr[i][0], &arr[i][1]);

    printf("%d", opt(n, k));
}