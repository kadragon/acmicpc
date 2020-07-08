// https://www.acmicpc.net/problem/2965
// 캥거루 세마리

#include <cstdio>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    c = c - b - 1, a = b - a - 1;
    printf("%d", c > a ? c : a);
}
