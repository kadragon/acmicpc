// https://www.acmicpc.net/problem/2476
// 주사위 게임

#include <cstdio>

int main() {
    int n, a, b, c, m = 0, t;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == b and b == c)
            t = 10000 + a * 1000;
        else if (a == b or a == c)
            t = 1000 + a * 100;
        else if (b == c)
            t = 1000 + b * 100;
        else {
            t = a > b ? a > c ? a : b > c ? b : c : b > c ? b : c;
            t *= 100;
        }
        if (m < t)
            m = t;
    }
    printf("%d", m);
}
