//
// Created by kangdonguk on 2020/03/01.
//

// https://www.acmicpc.net/problem/2292
// 벌집

#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    if (a == 1) {
        printf("%d", 1);
        return 0;
    }

    int t = (a - 2) / 6 + 1;
    int ans = 1;

    while (true) {
        if ((ans+1)*ans / 2 >= t)
            break;
        ans++;
    }

    printf("%d", ans+1);

    return 0;
}