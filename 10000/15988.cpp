//
// Created by kangdonguk on 2020/05/12.
//

// https://www.acmicpc.net/problem/15988
// 1, 2, 3 더하기 3

#include <stdio.h>

int main() {
    int n, t, a[1000001] = {0, 1, 2, 4}, d = 1000000009;
    scanf("%d", &t);

    for (int i = 4; i < 1000001; i++)
        a[i] = ((a[i - 1] + a[i - 2]) % d + a[i - 3]) % d;

    while (t--) {
        scanf("%d", &n);
        printf("%d\n", a[n]);
    }
}