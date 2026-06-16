//
// Created by kangdonguk on 2020/02/27.
//

// https://www.acmicpc.net/problem/10818
// 최소, 최대

#include <stdio.h>

int main(void) {
    int a, b;
    int min = 1000001, max = -1000001;
    scanf("%d", &a);

    for (int i=0; i<a; i++) {
        scanf("%d", &b);
        if (b < min)
            min = b;
        if (b > max)
            max = b;
    }
    printf("%d %d", min, max);

    return 0;
}
