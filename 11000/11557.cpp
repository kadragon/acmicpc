//
// Created by kangdonguk on 2020/06/28.
//

// https://www.acmicpc.net/problem/11557
// Yangjojang of The Year

#include <stdio.h>

int main() {
    int t, n, d[100], i, a;
    char s[101][21];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (i = 0, a = 0; i < n; i++) {
            scanf("%s %d", s[i], d + i);
            if (d[i] > d[a]) a = i;
        }
        printf("%s\n", s[a]);
    }
}