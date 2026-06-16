// https://www.acmicpc.net/problem/12788
// 제 2회 IUPC는 잘 개최될 수 있을까?

#include <algorithm>
#include <cstdio>

int n, m, k, d[1000];

void input() {
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", d + i);
}

void solve() {
    std::sort(d, d + n);
    int a = 0;
    for (int i = n - 1; i >= 0; i--) {
        a += d[i];
        if (a >= m * k) {
            printf("%d", n - i);
            return;
        }
    }

    printf("STRESS");
}

int main() {
    input();
    solve();
}
