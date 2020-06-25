//
// Created by kangdonguk on 2020/06/25.
//

// https://www.acmicpc.net/problem/3003
// 킹, 퀸, 룩, 비숍, 나이트, 폰

#include <stdio.h>

int main() {
    int a[] = {1, 1, 2, 2, 2, 8}, t, i;
    for (i = 0; i < 6; i++) {
        scanf("%d", &t);
        printf("%d ", a[i] - t);
    }
}
