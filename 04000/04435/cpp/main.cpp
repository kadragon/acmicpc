//
// Created by kangdonguk on 2020/06/30.
//

// https://www.acmicpc.net/problem/4435
// 중간계 전쟁

#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 3, 4, 10}, b[] = {1, 2, 2, 2, 3, 5, 10};
    int c, d, t, n;
    scanf("%d", &n);
    for (int k = 1; k <= n; k++) {
        c = 0, d = 0;
        for (int i = 0; i < 6; i++) {
            scanf("%d", &t);
            c += a[i] * t;
        }
        for (int i = 0; i < 7; i++) {
            scanf("%d", &t);
            d += b[i] * t;
        }
        printf("Battle %d: %s\n", k, c == d ? "No victor on this battle field" : c > d ? "Good triumphs over Evil"
                                                                                       : "Evil eradicates all trace of Good");
    }
}