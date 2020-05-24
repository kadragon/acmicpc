//
// Created by kangdonguk on 2020/03/08.
//

// https://www.acmicpc.net/problem/1904
// 01타일

#include <stdio.h>

int a[1000001] = {0, 1, 2};

int tile(int n) {
    if (n < 3 or a[n])
        return a[n];

    return a[n] = (tile(n-1) + tile(n-2)) % 15746;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", tile(n));

    return 0;
}
