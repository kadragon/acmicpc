//
// Created by kangdonguk on 2020/05/31.
//

// https://www.acmicpc.net/problem/2693
// N번째 큰 수

#include <stdio.h>
#include <algorithm>

int main() {
    int a[10], t, i;
    scanf("%d", &t);

    while (t--) {
        for (i = 0; i < 10; i++)
            scanf("%d", a + i);
        std::sort(a, a + 10);

        printf("%d\n", a[7]);
    }
}