// https://www.acmicpc.net/problem/2437
// 저울

#include <algorithm>
#include <cstdio>

int n, d[1001];

void input() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", d + i);

    std::sort(d, d + n);
}

void solve() {
    int m = 1;
    for (int i = 0; i < n; i++) {
        if (m < d[i])
            break;
        m += d[i];
    }
    printf("%d", m);
}

int main() {
    input();
    solve();
}