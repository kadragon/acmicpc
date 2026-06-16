//
// Created by kangdonguk on 2020/06/03.
//

// https://www.acmicpc.net/problem/5218
// 알파벳 거리

#include <stdio.h>

int main() {
    char a[21], b[21];
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%s %s", a, b);
        printf("Distances:");
        for (int i = 0; a[i]; i++)
            printf(" %d", b[i] - a[i] + (b[i] - a[i] < 0 ? 26 : 0));
        printf("\n");
    }
}