// https://www.acmicpc.net/problem/1244
// 스위치 켜고 끄기

#include <cstdio>

int n, d[101];

void input() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", d + i);
}

void solve() {
    int t, s, p;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &s, &p);
        if (s == 1) {
            for (int i = 1; i * p <= n; i++)
                d[i * p] = d[i * p] ? 0 : 1;
        } else if (s == 2) {
            for (int i = 0; p - i > 0 and p + i <= n; i++) {
                if (d[p - i] == d[p + i]) {
                    d[p - i] = d[p + i] = (d[p - i] ? 0 : 1);
                } else {
                    break;
                }
            }
        }
    }
}

void output() {
    for (int i = 1; i <= n; i++) {
        printf("%d ", d[i]);
        if (i % 20 == 0)
            printf("\n");
    }
}

int main() {
    input();
    solve();
    output();
}
