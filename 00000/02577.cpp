//
// Created by kangdonguk on 2020/02/27.
//

// https://www.acmicpc.net/problem/2577
// 숫자의 개수

#include <stdio.h>

int cnt[10];

int main(void) {
    int a, b, c, d;

    scanf("%d %d %d", &a, &b, &c);
    d = a * b * c;

    while (d != 0) {
        cnt[d%10] += 1;
        d /= 10;
    }

    for (int i=0; i<10; i++)
        printf("%d\n", cnt[i]);

    return 0;
}
