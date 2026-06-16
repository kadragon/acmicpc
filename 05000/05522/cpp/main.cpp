//
// Created by kangdonguk on 2020/04/29.
//

// https://www.acmicpc.net/problem/5522
// 카드 게임

#include <cstdio>

int main() {
    int a = 0, t, n = 5;
    while(n--) {
        scanf("%d", &t);
        a += t;
    }

    printf("%d", a);
}