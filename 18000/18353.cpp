// https://www.acmicpc.net/problem/18353
// 병사 배치하기

#include <cstdio>
#define max(a, b) ((a) > (b) ? (a) : (b))

int n, a[2001], d[2001], ans = 0;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", a + i);

        for (int j = 1; j < n; j++) {
            if (a[j] > a[i])
                d[i] = max(d[j] + 1, d[i]);
            if (ans < d[i])
                ans = d[i];
        }
    }

    printf("%d", n - ans - 1);
}
