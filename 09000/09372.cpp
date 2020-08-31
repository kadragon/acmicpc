// https://www.acmicpc.net/problem/9372
// 상근이의 여행

#include <cstdio>

int main() {
    int t, x, y, n, m;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &m);
        while (m--)
            scanf("%d %d", &x, &y);
        printf("%d\n", n - 1);
    }
}
