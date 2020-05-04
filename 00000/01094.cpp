//
// Created by kangdonguk on 2020/05/04.
//

// https://www.acmicpc.net/problem/1094
// 막대기

#include <cstdio>

int main() {
    int n, a = 1, k = 64, min = 64;
    scanf("%d", &n);

    while (k > n and min) {
        min /= 2;
        a += 1;
        if (k - min >= n) {
            k -= min;
            a--;
        }
    }

    printf("%d", a);
}