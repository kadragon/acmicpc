//
// Created by kangdonguk on 2020/03/23.
//

// https://www.acmicpc.net/problem/4811
// 알약

#include <stdio.h>

long long v[31][31];

long long solve(int w, int h) {
    if (w < 0 || h < 0)
        return 0;

    if (w == 0 and h == 0)
        return 1;

    if (v[w][h] > 0)
        return v[w][h];

    return v[w][h] = solve(w - 1, h + 1) + solve(w, h - 1);
}

int main() {
    int t;
    while (true) {
        scanf("%d", &t);
        if (t == 0)
            break;

        printf("%lld\n", solve(t, 0));
    }
}
