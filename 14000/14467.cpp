//
// Created by kangdonguk on 2020/06/06.
//

// https://www.acmicpc.net/problem/14467
// 소가 길을 건너간 이유 1

#include <stdio.h>

int n, a[11], x, y, d;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &x, &y);
        if (a[x] and a[x] != y + 1) d++;
        a[x] = y + 1;
    }

    printf("%d", d);
}
