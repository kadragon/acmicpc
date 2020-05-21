//
// Created by kangdonguk on 2020/03/30.
//

// https://www.acmicpc.net/problem/2156
// 포도주

#define max(a, b) ((a) > (b) ? (a) : (b))

#include <stdio.h>

int d[10002];
int ans[10002][2];

int f(int n, int e) {
    if (n < 1)
        return 0;

    if (n == 1)
        return ans[1][e] = e == 1 ? d[1] : 0;

    if (ans[n][e])
        return ans[n][e];

    return ans[n][e] = e == 1 ? max(max(f(n - 2, 1), f(n - 3, 1)), f(n - 2, 0) + d[n - 1]) + d[n] : max(f(n-1, 1), f(n-1, 0));
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &d[i]);

    printf("%d", max(f(n, 0), f(n, 1)));
}

