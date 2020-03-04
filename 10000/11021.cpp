//
// Created by kangdonguk on 2020/02/27.
//

// https://www.acmicpc.net/problem/11021
// A+B - 7

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);

    for (int i=1; i<=a; i++) {
        scanf("%d %d", &b, &c);
        printf("Case #%d: %d\n", i, b+c);
    }

    return 0;
}
