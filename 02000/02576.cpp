//
// Created by kangdonguk on 2020/05/20.
//

// https://www.acmicpc.net/problem/2576
// 홀수

#include <stdio.h>

int main() {
    int t = 7, p, s = 0, min = 101;
    while (t--) {
        scanf("%d", &p);
        if (p % 2) {
            s += p;
            if (min > p) min = p;
        }
    }
    if (s)
        printf("%d\n%d", s, min);
    else
        printf("%d", -1);
}