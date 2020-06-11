//
// Created by kangdonguk on 2020/06/11.
//

// https://www.acmicpc.net/problem/17362
// 수학은 체육과목 입니다 2

#include <stdio.h>

int main() {
    int n, a[] = {2, 1, 2, 3, 4, 5, 4, 3};
    scanf("%d", &n);
    printf("%d", a[n % 8]);
}