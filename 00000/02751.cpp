//
// Created by kangdonguk on 2020/03/06.
//

// https://www.acmicpc.net/problem/2751
// 수 정렬하기 2

#include <stdio.h>
#include <algorithm>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    std::sort(a, a+n);

    for (int i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}
