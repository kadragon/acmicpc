// https://www.acmicpc.net/problem/10865
// 친구 친구

#include <cstdio>

int n, p[100001];

int main() {
    int m, x, y;
    scanf("%d %d", &n, &m);
    while (m--) {
        scanf("%d %d", &x, &y);
        p[x]++, p[y]++;
    }
    for (int i = 1; i <= n; i++)
        printf("%d\n", p[i]);
}
