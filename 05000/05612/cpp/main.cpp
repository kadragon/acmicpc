//
// Created by kangdonguk on 2020/05/17.
//

// https://www.acmicpc.net/problem/5612
// 터널의 입구와 출구

#include <stdio.h>

int main() {
    int n, m, a, b, x = 0;
    scanf("%d %d", &n, &m);

    while (n--) {
        scanf("%d %d", &a, &b);
        m = m + a - b;
        if (m < 0) {
            x = 0;
            break;
        }
        if (x < m) x = m;
    }

    printf("%d", x);
}