// https://www.acmicpc.net/problem/9455
// 박스

#include <cstdio>

int main() {
    int t, m, n, p;
    scanf("%d", &t);
    while (t--) {
        int a = 0, d[100] = {0};
        scanf("%d %d", &m, &n);
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                scanf("%d", &p);
                p == 0 ? a += d[j] : d[j]++;
            }

        printf("%d\n", a);
    }
}
