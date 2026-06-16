// https://www.acmicpc.net/problem/15353
// 큰 수 A+B (2)

#include <cstdio>
#include <string.h>

char a[10002], b[10002];
int d[10002], max_len;

void input() {
    scanf("%s %s", a, b);
}

void solve() {
    int a_len, b_len, x, y, xl, yl;
    a_len = strlen(a), b_len = strlen(b);
    max_len = a_len > b_len ? a_len : b_len;
    xl = max_len - a_len, yl = max_len - b_len;
    for (int i = max_len - 1; i >= 0; i--) {
        x = i - xl >= 0 ? a[i - xl] - '0' : 0;
        y = i - yl >= 0 ? b[i - yl] - '0' : 0;

        d[i + 1] = x + y + d[i + 1];
        if (d[i + 1] >= 10)
            d[i + 1] -= 10, d[i] = 1;
    }
}

void output() {
    for (int i = 0; i <= max_len; i++) {
        if (i == 0 and d[i] == 0)
            continue;
        printf("%d", d[i]);
    }
}

int main() {
    input();
    solve();
    output();
}