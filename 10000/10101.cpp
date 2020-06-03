//
// Created by kangdonguk on 2020/06/03.
//

// https://www.acmicpc.net/problem/10101
// 삼각형 외우기

#include <stdio.h>

int main() {
    char s[][12] = {"Equilateral", "Isosceles", "Scalene", "Error"};
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c != 180) d = 3;
    else if (a != b and b != c and a != c) d = 2;
    else if (a + b == 120) d = 0;
    else d = 1;

    printf("%s", s[d]);
}