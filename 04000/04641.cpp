//
// Created by kangdonguk on 2020/06/19.
//

// https://www.acmicpc.net/problem/4641
// Doubles

#include <stdio.h>

int main() {
    int k = 1, t, c, a[201], i;
    while (true) {
        c = 0, k++, t = 1;
        while (t != 0) {
            scanf("%d", &t);
            if (t == -1) return 0;
            a[t] = k;
        }

        for (i = 1; i < 100; i++)
            if (a[i] == k && k == a[i * 2])
                c++;

        printf("%d\n", c);
    }
}