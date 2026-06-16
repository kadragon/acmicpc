//
// Created by kangdonguk on 2020/06/07.
//

// https://www.acmicpc.net/problem/2587
// 대표값2

#include <stdio.h>
#include <algorithm>

int main() {
    int a[5], s = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", a + i);
        s += a[i];
    }

    std::sort(a, a + 5);
    printf("%d\n%d", s / 5, a[2]);
}
