// https://www.acmicpc.net/problem/9625
// BABBA

#include <cstdio>

int main() {
    int a[2] = {1, 0}, n, x, y;
    scanf("%d", &n);
    while (n--) {
        x = a[0], y = a[1];
        a[0] = y, a[1] += x;
    }
    printf("%d %d", a[0], a[1]);
}