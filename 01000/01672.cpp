//
// Created by kangdonguk on 2020/07/01.
//

// https://www.acmicpc.net/problem/1672
// DNA 해독

#include <stdio.h>

int t(char c) {
    switch (c) {
        case 'A':
            return 0;
        case 'G':
            return 1;
        case 'C':
            return 2;
        case 'T':
            return 3;
    }
}

int main() {
    char a[1000001], d[4][5] = {"ACAG", "CGTA", "ATCG", "GAGT"};
    int n;
    scanf("%d %s", &n, a);
    for (int i = n - 2; i >= 0; i--)
        a[i] = d[t(a[i])][t(a[i + 1])];

    printf("%c", a[0]);
}