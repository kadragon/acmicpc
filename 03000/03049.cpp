// https://www.acmicpc.net/problem/3049
// 다각형의 대각선

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n-- * n-- * n-- * n / 24);
}