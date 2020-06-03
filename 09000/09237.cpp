//
// Created by kangdonguk on 2020/06/03.
//

// https://www.acmicpc.net/problem/9237
// 이장님 초대

#include <stdio.h>
#include <algorithm>

int main() {
    int a[100001], n, m = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", a + i);

    std::sort(a, a + n);

    for (int i = n - 1, j = 2; i >= 0; i--, j++)
        if (a[i] + j > m) m = a[i] + j;

    printf("%d", m);
}