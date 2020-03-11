//
// Created by kangdonguk on 2020/03/10.
//

// https://www.acmicpc.net/problem/1463
// 1로 만들기

#define min(a, b) ((a) < (b) ? (a) : (b))

#include <stdio.h>

int a[1000001];

void make(int k, int c) {
    if (a[k] == 0 or a[k] > c)
        a[k] = c;
    else
        return;

    if (k == 1) {
        a[1] = min(a[1], c);
        return;
    }

    if (k % 3 == 0)
        make(k / 3, c+1);

    if (k % 2 == 0)
        make(k / 2, c+1);

    make(k-1, c+1);
}

int main() {
    int n;
    scanf("%d", &n);

    make(n, 0);

    printf("%d\n", a[1]);
}