//
// Created by kangdonguk on 2020/05/15.
//

// https://www.acmicpc.net/problem/2003
// 수들의 합 2

#include <stdio.h>

int main() {
    int n, s, a = 0, t = 0, p = 0, d[10001];
    scanf("%d %d", &n, &s);

    for (int i = 0; i < n; i++) {
        scanf("%d", d + i);
        t += d[i];

        while (t > s)
            t -= d[a++];

        if (t == s) p++;
    }

    printf("%d", p);
}