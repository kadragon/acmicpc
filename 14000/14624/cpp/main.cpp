// https://www.acmicpc.net/problem/14624
// 전북대학교

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 2) {
        for (int i = 0; i < n; i++)
            printf("*");
        printf("\n");

        for (int i = 0; i < n / 2 + 1; i++) {
            for (int j = 0; j < n / 2 - i; j++)
                printf(" ");
            printf("*");
            for (int j = 0; j < i * 2 - 1; j++)
                printf(" ");
            if (i != 0)
                printf("*");
            printf("\n");
        }
    } else
        printf("I LOVE CBNU");
}
