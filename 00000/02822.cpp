//
// Created by kangdonguk on 2020/05/13.
//

// https://www.acmicpc.net/problem/2822
// 점수 계산

#include <cstdio>

int a[8], b[8], s;

int main() {
    for (int i = 0; i < 8; i++) {
        scanf("%d", a + i);
        for (int j = 0; j < i; j++)
            a[i] > a[j] ? b[i]++ : b[j]++;
    }

    for (int i = 0; i < 8; i++)
        if (b[i] >= 3)
            s += a[i];

    printf("%d\n", s);

    for (int i = 0; i < 8; i++)
        if (b[i] >= 3)
            printf("%d ", i + 1);
}