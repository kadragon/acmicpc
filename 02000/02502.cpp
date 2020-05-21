//
// Created by kangdonguk on 2020/05/21.
//

// https://www.acmicpc.net/problem/2502
// 떡 먹는 호랑이

#include <stdio.h>

int main() {
    int d, k, a[3] = {0, 1, 0}, b[3] = {0, 0, 1};
    scanf("%d %d", &d, &k);

    for (int i = 3; i <= d; i++) {
        a[i % 3] = a[(i - 1) % 3] + a[(i - 2) % 3];
        b[i % 3] = b[(i - 1) % 3] + b[(i - 2) % 3];
    }

    for (int i = 1;; i++)
        if ((k - a[d % 3] * i) % b[d % 3] == 0) {
            printf("%d\n%d", i, (k - a[d % 3] * i) / b[d % 3]);
            break;
        }
}