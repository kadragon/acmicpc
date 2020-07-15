// https://www.acmicpc.net/problem/11006
// 남욱이의 닭장

#include <cstdio>

int main() {
    int t, a, b;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &a, &b);
        printf("%d %d\n", b * 2 - a, a - b);
    }
}