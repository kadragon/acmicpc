//
// Created by kangdonguk on 2020/03/08.
//

// https://www.acmicpc.net/problem/1149
// RGB거리

#define min(a, b) ((a) < (b) ? (a) : (b))
#define FOR(i, n) for (int i = 0; i < (n); i++)

#include <stdio.h>

int R, G, B;
int r, g, b;

int main() {
    int n;
    scanf("%d", &n);

    FOR(i, n) {
        scanf("%d %d %d", &r, &g, &b);
        r += min(G, B);
        g += min(R, B);
        b += min(R, G);
        R = r;
        G = g;
        B = b;
    }

    printf("%d", min(min(R, G), B));
}