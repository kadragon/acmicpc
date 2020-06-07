//
// Created by kangdonguk on 2020/06/08.
//

// https://www.acmicpc.net/problem/15820
// 맞았는데 왜 틀리죠?

#include <stdio.h>

int main() {
    int a, b, c, d, x, y, i;

    scanf("%d %d", &a, &b);
    c = a, d = b;

    for (i = 1; i <= a + b; i++) {
        scanf("%d %d", &x, &y);
        if (x != y) break;
        else i <= a ? c-- : d--;
    }

    printf("%s", c + d ? (c ? "Wrong Answer" : "Why Wrong!!!") : "Accepted");
}
