//
// Created by kangdonguk on 2020/04/24.
//

// https://www.acmicpc.net/problem/1002
// 터렛

#include <cstdio>
#include <math.h>

#define cal(a, b) ((a) > (b) ? (a) - (b) : (b) - (a))
#define int_pow(a) ((int)(pow((a), 2)))

int main() {
    int n, x1, y1, r1, x2, y2, r2;

    scanf("%d", &n);
    while (n--) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        int f = int_pow(cal(x1, x2)) + int_pow(cal(y1, y2));
        int ipr = int_pow(r1 + r2);
        int ipcr = int_pow(cal(r1, r2));

        if (f == 0)
            printf("%d\n", r1 == r2 ? -1 : 0);
        else if (ipcr == f or ipr == f)
            printf("%d\n", 1);
        else if (f > ipcr && f < ipr)
            printf("%d\n", 2);
        else
            printf("%d\n", 0);
    }
}