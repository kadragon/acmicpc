//
// Created by kangdonguk on 2020/05/13.
//

// https://www.acmicpc.net/problem/10539
// 수빈이와 수열

#include <cstdio>

int a[101];

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", a + i);
        printf("%d ", a[i] * i - a[i - 1] * (i - 1));
    }
}