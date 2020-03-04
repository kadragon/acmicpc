//
// Created by kangdonguk on 2020/03/02.
//

// https://www.acmicpc.net/problem/10250
// ACM 호텔

#include <stdio.h>

int main(void) {
    int a;
    int h, w, n;
    scanf("%d", &a);

    while (a--) {
        scanf("%d %d %d", &h, &w, &n);

        printf("%d%02d\n", n % h == 0 ? h : n % h, n % h == 0 ? n / h : n / h + 1);
    }
}