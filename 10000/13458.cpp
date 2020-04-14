//
// Created by kangdonguk on 2020/04/14.
//

// https://www.acmicpc.net/problem/13458
// 시험 감독

#include <stdio.h>

int main() {
    int n, a[1000001], b, c, d;
    long long ans = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d %d", &b, &c);

    for (int i = 0; i < n; i++) {
        d = a[i] - b;
        ans += 1 + (d > 0 ? (d % c == 0 ? d / c : d / c + 1) : 0);
    }

    printf("%lld", ans);
}
