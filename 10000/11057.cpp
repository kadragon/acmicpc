//
// Created by kangdonguk on 2020/05/03.
//

// https://www.acmicpc.net/problem/11057
// 오르막 수

#include <cstdio>

int n, p[10][1001];

int f(int s, int k) {
    if (k == n)
        return 1;

    if (p[s][k])
        return p[s][k];

    for (int i = s; i <= 9; i++)
        p[s][k] += f(i, k + 1);

    return p[s][k] = p[s][k] % 10007;
}

int main() {
    scanf("%d", &n);
    printf("%d", f(0, 0));
}