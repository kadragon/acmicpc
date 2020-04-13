//
// Created by kangdonguk on 2020/04/13.
//

// https://www.acmicpc.net/problem/10816
// 숫자 카드 2

#include <stdio.h>

int a[20000001];

int main() {
    int n, m, t;

    scanf("%d", &n);
    while (n--) {
        scanf("%d", &t);
        a[t + 10000000]++;
    }

    scanf("%d", &m);
    while (m--) {
        scanf("%d", &t);
        printf("%d ", a[t + 10000000]);
    }
}