//
// Created by kangdonguk on 2020/06/02.
//

// https://www.acmicpc.net/problem/11943
// 파일 옮기기

#include <stdio.h>

int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", a + d < b + c ? a + d : b + c);
}