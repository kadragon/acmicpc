//
// Created by kangdonguk on 2020/05/31.
//

// https://www.acmicpc.net/problem/4101
// 크냐?

#include <stdio.h>

int main() {
    int x, y;
    while (true) {
        scanf("%d %d", &x, &y);
        if (x == 0 and y == 0) break;
        printf("%s\n", x > y ? "Yes" : "No");
    }
}