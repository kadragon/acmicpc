// https://www.acmicpc.net/problem/7572
// 간지(干支)

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    n = n + 56;
    printf("%c%c", n % 12 + 'A', n % 10 + '0');
}
