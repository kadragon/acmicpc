// https://www.acmicpc.net/problem/18408
// 3 つの整数

#include <cstdio>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", a == b ? a : c);
}
