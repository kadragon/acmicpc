//
// Created by kangdonguk on 2020/03/06.
//

// https://www.acmicpc.net/problem/2750
// 수 정렬하기

#include <stdio.h>

bool a[2002];

int main() {
    int n, t;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        a[t+1000] = true;
    }

    for (int i = 0;  i <= 2001; i++)
        if (a[i])
            printf("%d\n", i-1000);

    return 0;
}
