//
// Created by kangdonguk on 2020/03/01.
//

// https://www.acmicpc.net/problem/2839
// 설탕 배달

#include <stdio.h>

int main(void) {
    int a, ans = -1, c;
    scanf("%d", &a);

    for (int i = 0; i <= 12; i += 3) {
        c = a - i;
        if (c >= 0 and c % 5 == 0 and i % 3 == 0) {
            ans = c / 5 + i / 3;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}