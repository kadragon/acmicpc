// https://www.acmicpc.net/problem/2263
// 트리의 순회

#include <cstdio>

int a[100001], b[100001], at[100001], bt[100001], n;

void f(int as, int ae, int bs, int be) {
    if (as > ae or bs > be)
        return;

    printf("%d ", b[be]);

    if (as == ae)
        return;

    int p = at[b[be]], len;
    len = p - as;
    f(as, p - 1, bs, bs + len - 1);
    f(p + 1, ae, bs + len, be - 1);
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", a + i);
        at[a[i]] = i;
    }
    for (int i = 1; i <= n; i++) {
        scanf("%d", b + i);
        bt[b[i]] = i;
    }

    f(1, n, 1, n);
}
