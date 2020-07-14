// https://www.acmicpc.net/problem/11576
// Base Conversion

#include <cstdio>

int a, b, n, t, p;

void f(int q) {
    if (q / b > 0)
        f(q / b);

    printf("%d ", q % b);
}

int main() {
    scanf("%d %d %d", &a, &b, &n);
    while (n--) {
        scanf("%d", &t);
        p *= a;
        p += t;
    }
    f(p);
}