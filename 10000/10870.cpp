//
// Created by kangdonguk on 2020/03/03.
//

// https://www.acmicpc.net/problem/10870
// 피보나치 수 5

#include <stdio.h>

int fibo[21] = {0, 1, 1};

int cal(int n) {
    if (fibo[n] != 0 or n < 3)
        return fibo[n];

    return fibo[n] = cal(n-1) + cal(n-2);
}

int main() {
    int n;

    scanf("%d", &n);
    printf("%d", cal(n));

    return 0;
}