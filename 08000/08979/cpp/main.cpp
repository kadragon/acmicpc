//
// Created by kangdonguk on 2020/05/05.
//

// https://www.acmicpc.net/problem/8979
// 올림픽

#include <cstdio>

int a[1001][3];

int main() {
    int n, k, t, ans = 0;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        scanf("%d %d %d", a[t], a[t] + 1, a[t] + 2);
    }

    for (int i = 1; i <= n; i++) {
        if (a[i][0] > a[k][0] or (a[i][0] == a[k][0] and a[i][1] > a[k][1]) or
            (a[i][0] == a[k][0] and a[i][1] == a[k][1] and a[i][2] > a[k][2]))
            ans++;
    }

    printf("%d", ans + 1);
}