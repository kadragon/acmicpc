//
// Created by kangdonguk on 2020/06/19.
//

// https://www.acmicpc.net/problem/1920
// 수 찾기

#include <stdio.h>

int a[100000], n, t, t2;

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

bool find(int x, int y, int r) {
    if (x > y)
        return false;

    int m = (x + y) / 2;

    if (a[m] == r)
        return true;
    else if (a[m] > r)
        return find(x, m - 1, r);
    else if (a[m] < r)
        return find(m + 1, y, r);
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", a + i);

    merge_sort(0, n - 1);

    scanf("%d", &t2);

    for (int i = 0; i < t2; i++) {
        scanf("%d", &t);
        printf("%d\n", find(0, n - 1, t));
    }
}
