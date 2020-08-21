// https://www.acmicpc.net/problem/16917
// 양념 반 후라이드 반

#include <cstdio>

int main() {
    int a, b, c, x, y, s = 0, m;
    scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);
    m = x < y ? x : y, c *= 2;

    if ((a + b) > c)
        x -= m, y -= m, s = c * m;
    if (a > c)
        a = c;
    if (b > c)
        b = c;

    s += x * a + y * b;
    printf("%d", s);
}
