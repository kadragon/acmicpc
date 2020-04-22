//
// Created by kangdonguk on 2020/04/22.
//

// https://www.acmicpc.net/problem/1966
// 프린터 큐

#include <stdio.h>

int a[101], b[10];

int main() {
    int t, n, m, ans, s;
    scanf("%d", &t);

    while (t--) {
        ans = 0, s = 0;
        for (int i = 1; i <= 9; i++)
            b[i] = 0;

        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            b[a[i]]++;
        }

        for (int i = 9; i >= a[m]; i--)
            for (int j = s; b[i]; j++, j = j % n) {
                if (a[j] == i) {
                    ans++;
                    if (--b[i] == 0)
                        s = j + 1;
                }

                if (i == a[m] and j == m)
                    break;
            }

        printf("%d\n", ans);
    }
}