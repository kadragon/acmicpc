//
// Created by kangdonguk on 2020/04/11.
//

// https://www.acmicpc.net/problem/5086
// 배수와 약수

#include <stdio.h>

int main() {
    char s[3][9] = {"factor", "multiple", "neither"};

    int a, b;
    while (true) {
        scanf("%d %d", &a, &b);
        if (!(a || b))
            break;

        printf("%s\n", b % a == 0 ? s[0] : a % b == 0 ? s[1] : s[2]);
    }
}
