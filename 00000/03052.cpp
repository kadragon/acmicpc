//
// Created by kangdonguk on 2020/02/27.
//

// https://www.acmicpc.net/problem/3052
// 나머지

#include <stdio.h>

int cnt[42];

int main(void) {
    int a, c = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a);
        if (cnt[a%42] == 0) {
            cnt[a%42] = 1;
            c += 1;
        }
    }

    printf("%d", c);

    return 0;
}
