// https://www.acmicpc.net/problem/18429
// 근손실

#include <cstdio>

int n, k, d[8], p[8], a;

void f(int t, int s) {
    if (t == n) {
        a++;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!p[i] and s + d[i] - k >= 0) {
            p[i] = 1;
            f(t + 1, s + d[i] - k);
            p[i] = 0;
        }
    }
}

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", d + i);

    f(0, 0);
    printf("%d", a);
}