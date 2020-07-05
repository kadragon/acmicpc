// https://www.acmicpc.net/problem/2720
// 세탁소 사장 동혁

#include <cstdio>

int main() {
    int d[] = {25, 10, 5, 1}, n, t;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &t);
        for (int i = 0; i < 4; i++) {
            printf("%d ", t / d[i]);
            t %= d[i];
        }
        printf("\n");
    }
}