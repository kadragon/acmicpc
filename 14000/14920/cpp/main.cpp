// https://www.acmicpc.net/problem/14920
// 3n+1 수열

#include <stdio.h>

int main() {
    int n, k = 1;
    scanf("%d", &n);
    while (n > 1) {
        n = n % 2 ? 3 * n + 1 : n / 2;
        k++;
    }
    printf("%d", k);
}