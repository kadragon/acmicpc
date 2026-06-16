//
// Created by kangdonguk on 2020/06/06.
//

// https://www.acmicpc.net/problem/9506
// 소가 길을 건너간 이유 1

#include <stdio.h>
#include <algorithm>

int main() {
    int n, a, i, d[400], j;
    while (true) {
        scanf("%d", &n);
        if (n == -1)
            break;

        a = 0, j = 0;
        for (i = 1; i * i < n; i++) {
            if (n % i == 0) {
                d[j++] = i, d[j++] = n / i;
                a += i, a += n / i;
            }
        }

        if (i * i == n)
            a += i, d[j++] = i;

        if (n * 2 == a) {
            std::sort(d, d + j);
            printf("%d = 1", n);
            for (i = 1; i < j - 1; i++)
                printf(" + %d", d[i]);
        } else
            printf("%d is NOT perfect.", n);

        printf("\n");
    }
}
