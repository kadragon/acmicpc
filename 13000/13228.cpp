// https://www.acmicpc.net/problem/13228
// The REAL Manhattan distance

#include <cstdio>

int abs(int p, int q) {
    return p > q ? p - q : q - p;
}

int main() {
    int a, b, c, d, e, f, n;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
        printf("%d\n", abs(a, d) + abs(b, e) + c + f);
    }
}
