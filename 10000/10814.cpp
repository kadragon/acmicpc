//
// Created by kangdonguk on 2020/03/08.
//

// https://www.acmicpc.net/problem/10814
// 나이순 정렬

#include <stdio.h>

int a[201][100001];
int c[201];
char s[100001][101];

int main() {
    int n, t, ans = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %s", &t, s[i]);
        a[t][c[t]++] = i;
    }

    for (int i = 1; i < 201; i++) {
        if (c[i] > 0) {
            ans += c[i];
            for (int j = 0; j < c[i]; j++)
                printf("%d %s\n", i, s[a[i][j]]);

            if (ans == n)
                break;
        }
    }
}