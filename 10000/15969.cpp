//
// Created by kangdonguk on 2020/05/11.
//

// https://www.acmicpc.net/problem/15969
// 새

#include <stdio.h>

int main() {
    int n, a = 0, b = 1000, t;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &t);
        if (t > a) a = t;
        if (t < b) b = t;
    }

    printf("%d", a - b);
}
