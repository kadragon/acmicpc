//
// Created by kangdonguk on 2020/03/06.
//

// https://www.acmicpc.net/problem/10989
// 수 정렬하기 2

#include <stdio.h>

int a[10001];

int main() {
    int n, t;
    scanf("%d", &n);

    while(n--) {
        scanf("%d", &t);
        a[t]++;
    }

    for (int i = 1; i <= 10000; i++)
        for (int j = 1; j <= a[i]; j++)
            printf("%d\n", i);

    return 0;
}
