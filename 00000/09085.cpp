//
// Created by kangdonguk on 2020/05/18.
//

// https://www.acmicpc.net/problem/9085
// 더하기

#include <stdio.h>

int main() {
    int t, n, s, p;
    scanf("%d", &t);

    while (t--) {
        s = 0;
        scanf("%d", &n);

        while (n--) {
            scanf("%d", &p);
            s += p;
        }

        printf("%d\n", s);
    }
}