//
// Created by kangdonguk on 2020/05/24.
//

// https://www.acmicpc.net/problem/1145
// 적어도 대부분의 배수

#include <stdio.h>

int main() {
    int a[5], t, c;
    for (int i = 0; i < 5; i++)
        scanf("%d", a + i);

    for (t = 1;; t++) {
        c = 0;
        for (int i = 0; i < 5; i++)
            if (t % a[i] == 0)
                c++;
        if (c >= 3) {
            printf("%d", t);
            break;
        }
    }
}