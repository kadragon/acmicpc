//
// Created by kangdonguk on 2020/05/02.
//

// https://www.acmicpc.net/problem/3047
// ABC

#include <cstdio>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int a[3];
    scanf("%d %d %d", a, a + 1, a + 2);

    if (a[0] > a[1]) swap(a, a + 1);
    if (a[1] > a[2]) swap(a + 1, a + 2);
    if (a[0] > a[1]) swap(a, a + 1);

    char s[4];
    scanf("%s", s);

    for (int i = 0; s[i]; i++)
        printf("%d ", a[s[i] - 'A']);
}