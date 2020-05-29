//
// Created by kangdonguk on 2020/05/29.
//

// https://www.acmicpc.net/problem/11948
// 과목선택

#include <stdio.h>

int main() {
    int a = 0, t, r, min = 101, p = 4;
    while (p--) {
        scanf("%d", &t);
        a += t;
        if (min > t) min = t;
    }

    scanf("%d %d", &t, &r);
    printf("%d", a - min + (t > r ? t : r));
}
