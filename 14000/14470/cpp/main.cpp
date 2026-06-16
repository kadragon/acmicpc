// https://www.acmicpc.net/problem/14470
// 전자레인지

#include <cstdio>

int a, b, c, d, e, ans;

void input() {
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
}

void solve() {
    if (a < 0) {
        ans += c * (a * -1);
        a = 0;
    }
    if (a == 0) {
        ans += d;
    }
    ans += (b - a) * e;
}

void output() {
    printf("%d", ans);
}

int main() {
    input();
    solve();
    output();
}
