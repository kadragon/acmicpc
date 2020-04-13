//
// Created by kangdonguk on 2020/04/13.
//

// https://www.acmicpc.net/problem/4564
// 숫자 카드놀이

#include <stdio.h>

void f(int t) {
    printf("%d ", t);
    if (t < 10)
        return;

    int a = 1;
    while (t != 0) {
        a *= t % 10;
        t = t / 10;
    }
    f(a);
}

int main() {
    int t;
    while (true) {
        scanf("%d", &t);
        if (t == 0)
            break;

        f(t);
        printf("\n");
    }
}