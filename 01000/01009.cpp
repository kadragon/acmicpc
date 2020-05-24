//
// Created by kangdonguk on 2020/05/11.
//

// https://www.acmicpc.net/problem/1009
// 분산처리

#include <stdio.h>

int main() {
    int t, a, b, p, c[10], k;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &a, &b);
        k = 1, p = c[0] = a % 10;

        while (true) {
            p = p * a % 10;
            if (p == c[0])
                break;
            c[k++] = p;
        }

        printf("%d\n", c[0] == 0 ? 10 : b % k == 0 ? c[k - 1] : c[b % k - 1]);
    }
}
