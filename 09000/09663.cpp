// https://www.acmicpc.net/problem/9663
// N-Queen

#include <cstdio>

int n, v[16], p[30], q[30], c = 0;

void solve(int x) {
    if (x > n) {
        c++;
        return;
    }

    for (int i = 1; i <= n; i++) {
        int a = x + i, b = n - x + 1 + i;
        if (!v[i] and !p[a] and !q[b]) {
            v[i] = p[a] = q[b] = 1;
            solve(x + 1);
            v[i] = p[a] = q[b] = 0;
        }
    }
}

int main() {
    scanf("%d", &n);
    solve(1);
    printf("%d", c);
}
