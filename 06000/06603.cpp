//
// Created by kangdonguk on 2020/05/06.
//

// https://www.acmicpc.net/problem/6603
// 로또

#include <cstdio>

int n, a[14], b[7];

void f(int k, int s) {
    if (k > 6 or s > n or n - s < 6 - k)
        return;

    for (int i = s; i <= n; i++) {
        b[k] = a[i];
        if (k == 6) {
            for (int j = 1; j <= 6; j++)
                printf("%d ", b[j]);

            printf("\n");
        } else
            f(k + 1, i + 1);
    }
}

int main() {
    while (true) {
        scanf("%d", &n);
        if (!n)
            break;

        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);

        f(1, 1);

        printf("\n");
    }
}