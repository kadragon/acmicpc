// https://www.acmicpc.net/problem/2530
// 인공지능 시계

#include <cstdio>

int main() {
    int h, m, s, a;
    scanf("%d %d %d %d", &h, &m, &s, &a);
    a += h * 3600 + m * 60 + s;
    a %= 3600 * 24;
    printf("%d %d %d", a / 3600, a % 3600 / 60, a % 60);
}