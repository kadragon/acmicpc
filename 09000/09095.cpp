//
// Created by kangdonguk on 2020/03/25.
//

// https://www.acmicpc.net/problem/9095
// 1, 2, 3 더하기

#include <stdio.h>

int count(int n, int k) {
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;

    return count(n-1, k+1) + count(n-2, k+1) + count(n-3, k+1);
}

int main() {
    int n, t;
    scanf("%d", &n);

    while(n--) {
        scanf("%d", &t);
        printf("%d\n", count(t, 0));
    }
}