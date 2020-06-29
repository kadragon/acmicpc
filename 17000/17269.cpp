//
// Created by kangdonguk on 2020/06/29.
//

// https://www.acmicpc.net/problem/17269
// 이름궁합 테스트

#include <stdio.h>

int main() {
    int d[] = {3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
    int k[200], n, m, p = 0, q = 0, i = 0, j;
    char a[101], b[101];
    scanf("%d %d %s %s", &n, &m, a, b);

    while (a[p] or b[q]) {
        if (a[p]) k[i++] = d[a[p++] - 'A'];
        if (b[q]) k[i++] = d[b[q++] - 'A'];
    }

    for (i = 1; i < n + m - 1; i++)
        for (j = 0; j < n + m - i; j++)
            k[j] = (k[j] + k[j + 1]) % 10;

    printf("%d%%", k[0] * 10 + k[1]);
}