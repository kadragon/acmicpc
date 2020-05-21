//
// Created by kangdonguk on 2020/05/08.
//

// https://www.acmicpc.net/problem/2096
// 내려가기

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

#include <stdio.h>

int a[3], c[3], b[3], x, y, p;

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        scanf("%d %d %d", b, b + 1, b + 2);
        for (int i = 0; i < 3; i++) {
            a[i] += b[i];
            c[i] += b[i];
        }

        for (int i = 0; i < 3; i++) {
            p = i * 2 % 3, x = i, y = (i + 1) % 3;
            a[p] = max(a[x], a[y]);
            c[p] = min(c[x], c[y]);
        }
    }

    printf("%d %d", a[1], c[1]);
}
