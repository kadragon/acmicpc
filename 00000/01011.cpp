//
// Created by kangdonguk on 2020/03/02.
//

// https://www.acmicpc.net/problem/1011
// Fly me to the Alpha Centauri

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, x, y, i, re;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &x, &y);
        if (y - x == 1) {
            printf("%d\n", 1);
            continue;
        }

        i = (int)sqrt(y-x);
        re = y - x - i * i;
        printf("%d\n", i * 2 - 1 + (re == 0 ? 0 : (re < i ? 1 : (int)(ceil((float)re / i)))));
    }
}