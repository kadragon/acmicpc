// https://www.acmicpc.net/problem/1292
// 쉽게 푸는 문제

#include <stdio.h>

int main() {
    int x, y, k = 1;
    int d[1001] = {0};
    scanf("%d %d", &x, &y);
    for (int i = 1; k <= y; i++)
        for (int j = 1; j <= i and k <= y; j++, k++)
            d[k] = i + d[k - 1];

    printf("%d", d[y] - d[x - 1]);
}