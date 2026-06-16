//
// Created by kangdonguk on 2020/05/12.
//

// https://www.acmicpc.net/problem/2490
// 윷놀이

#include <stdio.h>

int main() {
    int t = 3, a, b, c, d;
    char k[6] = "DCBAE";

    while (t--) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("%c\n", k[a + b + c + d]);
    }
}