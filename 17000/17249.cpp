// https://www.acmicpc.net/problem/17249
// 태보태보 총난타

#include <cstdio>

char s[1001];
int a[2], p;

void input() {
    scanf("%s", s);
}

void solve() {
    for (int i = 0; s[i]; i++) {
        if (s[i] == '@')
            a[p]++;
        else if (s[i] == ')')
            p++;
    }
}

void output() {
    printf("%d %d", a[0], a[1]);
}

int main() {
    input();
    solve();
    output();
}
