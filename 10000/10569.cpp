//
// Created by kangdonguk on 2020/05/11.
//

// https://www.acmicpc.net/problem/10569
// 다면체

#include <stdio.h>

int main() {
    int t, v, e;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &v, &e);
        printf("%d\n", -1 * (v - e - 2));
    }
}
