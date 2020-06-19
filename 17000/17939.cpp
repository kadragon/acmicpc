//
// Created by kangdonguk on 2020/06/19.
//

// https://www.acmicpc.net/problem/17939
// Gazzzua

#include <stdio.h>

int a[100001], n, p, k;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", a + i);

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] < k) p += k - a[i];
        else k = a[i];
    }

    printf("%d", p);
}