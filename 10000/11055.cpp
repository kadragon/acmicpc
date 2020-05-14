//
// Created by kangdonguk on 2020/05/14.
//

// https://www.acmicpc.net/problem/11055
// 가장 큰 증가 부분 수열

#include <stdio.h>

int a[1001], s[1001], n, k;

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", a + i);
        s[i] = a[i];

        for (int j = 1; j < i; j++)
            if (a[j] < a[i] and s[i] < s[j] + a[i])
                s[i] = s[j] + a[i];

        if (s[i] > k)
            k = s[i];
    }

    printf("%d", k);
}