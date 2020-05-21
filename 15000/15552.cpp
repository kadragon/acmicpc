//
// Created by kangdonguk on 2020/02/27.
//

// https://www.acmicpc.net/problem/15552

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);

    for (int i=0; i<a; i++) {
        scanf("%d %d", &b, &c);
        printf("%d\n", b+c);
    }

    return 0;
}
