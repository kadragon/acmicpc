//
// Created by kangdonguk on 2020/02/27.
//

// https://www.acmicpc.net/problem/2739

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i=1; i<10; i++)
        printf("%d * %d = %d\n", a, i, a*i);

    return 0;
}
