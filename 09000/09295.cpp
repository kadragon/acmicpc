// https://www.acmicpc.net/problem/9295
// 주사위

#include <cstdio>

int main() {
    int t, a, b;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", i, a + b);
    }
}