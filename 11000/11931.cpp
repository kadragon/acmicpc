//
// Created by kangdonguk on 2020/06/15.
//

// https://www.acmicpc.net/problem/11931
// 수 정렬하기 4

#include <stdio.h>

int a[1000001], n;

void merge(int x, int y) {
    if (x == y) return;
    int m = (x + y) / 2, p = x, q = m + 1, b[y - x + 1], i = 0;

    while (p <= m and q <= y)
        b[i++] = a[p] < a[q] ? a[p++] : a[q++];

    while (p <= m)
        b[i++] = a[p++];

    while (q <= y)
        b[i++] = a[q++];

    for (int j = 0; j < i; j++)
        a[x + j] = b[j];
}

void merge_sort(int x, int y) {
    if (x < y) {
        int m = (x + y) / 2;
        merge_sort(x, m);
        merge_sort(m + 1, y);
        merge(x, y);
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", a + i);

    merge_sort(0, n - 1);

    for (int i = n - 1; i >= 0; i--)
        printf("%d\n", a[i]);
}