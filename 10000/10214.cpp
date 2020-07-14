// https://www.acmicpc.net/problem/10214
// Baseball

#include <cstdio>

int main() {
    int t, y, k, a, b;
    scanf("%d", &t);
    while (t--) {
        y = k = 0;
        for (int i = 1; i <= 9; i++) {
            scanf("%d %d", &a, &b);
            y += a;
            k += b;
        }
        printf("%s\n", y == k ? "draw" : y > k ? "Yonsei" : "Korea");
    }
}