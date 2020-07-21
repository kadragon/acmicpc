// https://www.acmicpc.net/problem/10419
// 지각

#include <cstdio>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, i = 0;
        scanf("%d", &n);
        while (i * i + i <= n)
            i++;

        printf("%d\n", i - 1);
    }
}