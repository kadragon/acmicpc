//
// Created by kangdonguk on 2020/04/02.
//

// https://www.acmicpc.net/problem/9084
// 동전

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m, d[20], a[10001] = {1,};

        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &d[i]);

        scanf("%d", &m);

        for (int i = 0; i < n; i++)
            for (int j = 0; j <= m; j++)
                if (j - d[i] >= 0)
                    a[j] += a[j - d[i]];

        printf("%d\n", a[m]);
    }
}