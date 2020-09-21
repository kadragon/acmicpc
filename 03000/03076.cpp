// https://www.acmicpc.net/problem/3076
// 상근이의 체스판

#include <cstdio>

int main() {
    int r, c, a, b;
    scanf("%d %d %d %d", &r, &c, &a, &b);
    for (int i = 0; i < r * a; i++, printf("\n"))
        for (int j = 1; j <= c; j++)
            for (int k = 1; k <= b; k++)
                printf("%c", (i / a + j) % 2 ? 'X' : '.');
}
