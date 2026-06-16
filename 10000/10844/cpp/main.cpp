//
// Created by kangdonguk on 2020/03/10.
//

// https://www.acmicpc.net/problem/10844
// 쉬운 계단 수

#include <stdio.h>

int n;
int arr[101][10] = {{0, }, {0, 1, 1, 1, 1, 1, 1, 1, 1, 1}, };

void floor(int k) {
    for(int i = 0; i <= 9; i++) {
        if (i > 0)
            arr[k][i] += arr[k-1][i-1];
        if (i < 9)
            arr[k][i] += arr[k-1][i+1];

        arr[k][i] %= 1000000000;
    }

    if (k < n)
        floor(++k);
}

int main() {
    scanf("%d", &n);

    floor(2);

    int sum = 0;
    for (int j = 0; j <= 9; j++) {
        sum += arr[n][j];
        sum %= 1000000000;
    }

    printf("%d", sum);
}

/*
 * C++ 에서는 전역변수를 사용할때, 제약이 있는듯 하다.
 * C++14 통과 | C++ Runtime Error
 */