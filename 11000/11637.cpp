// https://www.acmicpc.net/problem/11637
// 인기 투표

#include <cstdio>

void solve() {
    int n, d[11] = {0}, dup = 0, max = 0, t = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", d + i);
        t += d[i];
        if (d[max] < d[i]) {
            max = i;
            dup = 0;
        } else if (d[max] == d[i]) {
            dup = 1;
        }
    }

    if (dup)
        printf("no winner\n");
    else
        printf("%s winner %d\n", d[max] > (t / 2) ? "majority" : "minority", max);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
}
