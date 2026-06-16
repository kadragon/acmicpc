//
// Created by kangdonguk on 2020/03/25.
//

// https://www.acmicpc.net/problem/11726
// 2×n 타일링

#include <stdio.h>

int arr[1001];

int c(int n) {
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    if (arr[n])
        return arr[n];

    return arr[n] = (c(n - 2) + c(n - 1)) % 10007;
}

int main() {
    int n;

    scanf("%d", &n);
    printf("%d", c(n));
}