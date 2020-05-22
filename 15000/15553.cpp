//
// Created by kangdonguk on 2020/05/22.
//

// https://www.acmicpc.net/problem/15553
// 난로

#include <stdio.h>
#include <algorithm>

int n, k, t[100001], s[100001], p;

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", t + i);
        if (i == 0) continue;
        s[i - 1] = t[i] - t[i - 1] - 1;
    }

    std::sort(s, s + n);

    p = t[n - 1] - t[0] + 1;

    for (int i = 0; i < k - 1; i++)
        p -= s[n - i - 1];

    printf("%d", p);
}
