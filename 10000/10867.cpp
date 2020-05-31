//
// Created by kangdonguk on 2020/05/31.
//

// https://www.acmicpc.net/problem/10867
// 중복 빼고 정렬하기

#include <stdio.h>

int a[2001], n, t;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &t);
        a[t + 1000] = 1;
    }

    for (int i = 0; i <= 2000; i++)
        if (a[i]) printf("%d ", i - 1000);
}