//
// Created by kangdonguk on 2020/04/19.
//

// https://www.acmicpc.net/problem/18870
// 좌표 압축

#include <stdio.h>
#include <algorithm>

int a[1000000], c[1000000];

int find(int n, int s, int e) {
    if (s > e)
        return -1;

    int mid = (s + e) / 2;

    if (a[mid] == n)
        return mid;
    else if (a[mid] > n)
        return find(n, s, mid - 1);
    else
        return find(n, mid + 1, e);
}

int main() {
    int n, j = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }

    std::sort(a, a + n);

    for (int i = 1; i < n; i++) {
        if (a[i] != a[j])
            a[++j] = a[i];
    }

    for (int i = 0; i < n; i++)
        printf("%d ", find(c[i], 0, j));
}