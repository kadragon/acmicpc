// https://www.acmicpc.net/problem/2753

#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);
    printf("%d", (a % 4 == 0 && a % 100 != 0) || a % 400 == 0 ? 1 : 0);

    return 0;
}