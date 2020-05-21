//
// Created by kangdonguk on 2020/03/08.
//

// https://www.acmicpc.net/problem/9461
// 파도반 수열

#define FOR(i, n) for (int i = 0; i < (n); i++)

#include <stdio.h>

long long int a[101] = {0, 1, 1, 1, 2, 2};

long long int p(int n) {
    if (n < 6 or a[n])
        return a[n];

    return a[n] = p(n-1) + p(n-5);
}

int main() {
    int n, t;
    scanf("%d", &n);

    FOR(i, n) {
        scanf("%d", &t);
        printf("%lld\n", p(t));
    }

    return 0;
}
