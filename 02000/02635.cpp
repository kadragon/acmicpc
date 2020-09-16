// https://www.acmicpc.net/problem/2635
// 수 이어가기

#include <cstdio>

int ans[101], m, n, d[101];

void f(int b) {
    int i;
    d[1] = b;
    for (i = 2; d[i - 2] - d[i - 1] >= 0; i++)
        d[i] = d[i - 2] - d[i - 1];

    if (i > m) {
        for (int j = 0; j < i; j++)
            ans[j] = d[j];
        m = i;
    }
}

int main() {
    scanf("%d", &n);
    d[0] = n;
    for (int i = 0; i <= n; i++)
        f(i);

    printf("%d\n", m);
    for (int i = 0; i < m; i++)
        printf("%d ", ans[i]);
}
