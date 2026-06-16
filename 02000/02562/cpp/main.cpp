//
// Created by kangdonguk on 2020/02/27.
//

// https://www.acmicpc.net/problem/2562
// 최소, 최대

#include <stdio.h>

int main(void) {
    int k[10], max = 1;
    for (int i = 1; i <= 9; i++) {
        scanf("%d", &k[i]);
        if (k[max] < k[i])
            max = i;
    }
    printf("%d\n%d", k[max], max);
}
