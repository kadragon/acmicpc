// https://www.acmicpc.net/problem/2702
// 초6 수학

#include <cstdio>

int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
    int n, a, b, t;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &a, &b);
        t = gcd(a, b);
        printf("%d %d\n", a * b / t, t);
    }
}