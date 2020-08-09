// https://www.acmicpc.net/problem/13118
// 뉴턴과 사과

#include <cstdio>

int p[5], x, y, r, ans;

void input() {
    for (int i = 1; i <= 4; i++)
        scanf("%d", p + i);
    scanf("%d %d %d", &x, &y, &r);
}

void solve() {
    for (int i = 1; i <= 4; i++)
        if (p[i] == x) {
            ans = i;
            break;
        }
}

void output() {
    printf("%d", ans);
}

int main() {
    input();
    solve();
    output();
}
