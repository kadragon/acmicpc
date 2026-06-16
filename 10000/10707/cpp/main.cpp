//
// Created by kangdonguk on 2020/05/05.
//

// https://www.acmicpc.net/problem/10707
// 수도요금

#include <cstdio>

int main() {
    int a, b, c, d, p;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &p);

    a = p * a;
    b = b + (p > c ? (p - c) * d : 0);

    printf("%d", a < b ? a : b);
}