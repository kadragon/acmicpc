// https://www.acmicpc.net/problem/5054
// 주차의 신

#include <cstdio>

int main() {
    int t, n, a, b, p;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        a = 100, b = 0;
        while (n--) {
            scanf("%d", &p);
            b = p > b ? p : b;
            a = p < a ? p : a;
        }
        printf("%d\n", (b - a) * 2);
    }
}
