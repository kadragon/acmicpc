// https://www.acmicpc.net/problem/9655
// 돌 게임

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    printf("%s", n % 2 ? "SK" : "CY");
}