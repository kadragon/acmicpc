//
// Created by kangdonguk on 2020/05/04.
//

// https://www.acmicpc.net/problem/1453
// 피시방 알바

#include <cstdio>

int d[101];

int main() {
    int n, a = 0, t;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &t);
        d[t] ? a++ : d[t] = 1;
    }

    printf("%d", a);
}