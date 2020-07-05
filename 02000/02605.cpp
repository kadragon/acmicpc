// https://www.acmicpc.net/problem/2605
// 줄 세우기

#include <cstdio>

int main() {
    int n, t, a[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
        scanf("%d", &t);
        for (int j = i; j > i - t; j--)
            a[j] ^= a[j - 1] ^= a[j] ^= a[j - 1];
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
