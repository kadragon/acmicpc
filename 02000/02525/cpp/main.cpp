// https://www.acmicpc.net/problem/2525
// 오븐 시계

#include <cstdio>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    a = a * 60 + b + c;
    a %= 24 * 60;
    printf("%d %d", a / 60, a % 60);
}
