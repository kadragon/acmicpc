// https://www.acmicpc.net/problem/5176
// 대회 자리

#include <cstdio>

int main() {
    int k, p, m, t, a, d[501] = {0};
    scanf("%d", &k);
    for (int i = 1; i <= k; i++) {
        a = 0;
        scanf("%d %d", &p, &m);
        while (p--) {
            scanf("%d", &t);
            d[t] != i ? d[t] = i : a++;
        }
        printf("%d\n", a);
    }
}
