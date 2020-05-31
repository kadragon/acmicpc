//
// Created by kangdonguk on 2020/03/27.
//

// https://www.acmicpc.net/problem/4153
// 직각삼각형

#include <stdio.h>
#include <algorithm>

int main() {
    int v[3];

    while (true) {
        scanf("%d %d %d", &v[0], &v[1], &v[2]);
        std::sort(v, v + 3);
        if (v[2] == 0)
            break;

        printf("%s\n", v[0] * v[0] + v[1] * v[1] == v[2] * v[2] ? "right" : "wrong");
    }
}