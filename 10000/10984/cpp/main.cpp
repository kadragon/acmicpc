//
// Created by kangdonguk on 2020/05/14.
//

// https://www.acmicpc.net/problem/10984
// 내 학점을 구해줘

#include <stdio.h>

int main() {
    int n, t, a, x;
    float b, y;
    scanf("%d", &n);

    while (n--) {
        b = a = 0;
        scanf("%d", &t);

        while (t--) {
            scanf("%d %f", &x, &y);
            a += x;
            b += x * y;
        }

        printf("%d %.1f\n", a, b / a);
    }
}