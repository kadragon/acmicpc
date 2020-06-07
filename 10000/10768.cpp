//
// Created by kangdonguk on 2020/06/07.
//

// https://www.acmicpc.net/problem/10768
// 특별한 날

#include <stdio.h>

int main() {
    int a, b, c, d = 0;
    char s[][8] = {"Before", "After", "Special"};
    scanf("%d %d", &a, &b);
    c = a * 100 + b;
    if (c > 218) d = 1;
    else if (c == 218) d = 2;

    printf("%s", s[d]);
}
