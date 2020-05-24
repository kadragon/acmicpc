//
// Created by kangdonguk on 2020/03/08.
//

// https://www.acmicpc.net/problem/1003
// 피보나치 함수

#define FOR(i, n) for (int i = 0; i < (n); i++)

#include <stdio.h>

int z[41] = {1, 0};
int o[41] = {0, 1};

void fibo(int n) {
    if (n < 2 or z[n]) {
        return;
    }

    fibo(n-1);
    fibo(n-2);

    z[n] = z[n-1] + z[n-2];
    o[n] = o[n-1] + o[n-2];
}

int main() {
    int n, t;
    scanf("%d", &n);

    FOR(i, n) {
        scanf("%d", &t);
        fibo(t);

        printf("%d %d\n", z[t], o[t]);
    }

    return 0;
}