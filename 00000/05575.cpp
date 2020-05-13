//
// Created by kangdonguk on 2020/05/13.
//

// https://www.acmicpc.net/problem/5575
// 타임 카드

#include <stdio.h>

int main() {
    int a[6], t = 3, s, k[] = {3600, 60, 1};

    while (t--) {
        s = 0;

        for (int i = 0; i < 6; i++) {
            scanf("%d", a + i);
            if (i > 2)
                s += (a[i] - a[i - 3]) * k[i - 3];
        }

        printf("%d %d %d\n", s / 3600, s % 3600 / 60, s % 60);
    }
}