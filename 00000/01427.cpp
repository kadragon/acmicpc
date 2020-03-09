//
// Created by kangdonguk on 2020/03/06.
//

// https://www.acmicpc.net/problem/1427
// 소트인사이드

#include <stdio.h>

int a[10];

int main() {
    int n;
    scanf("%d", &n);
    while (n > 0) {
        a[n % 10]++;
        n /= 10;
    }

    for (int i = 9; i >= 0; i--)
        for (int j = 0; j < a[i]; j++)
            printf("%d", i);

    return 0;
}
