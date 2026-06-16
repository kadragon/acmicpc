//
// Created by kangdonguk on 2020/05/03.
//

// https://www.acmicpc.net/problem/5565
// 영수증

#include <cstdio>

int main() {
    int a, t, c = 9;
    scanf("%d", &a);

    while (c--) {
        scanf("%d", &t);
        a -= t;
    }

    printf("%d", a);
}