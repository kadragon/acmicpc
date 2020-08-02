// https://www.acmicpc.net/problem/15232
// Rectangles

#include <cstdio>

char s[] = "********************";
int r, c;

void input() {
    scanf("%d %d", &r, &c);
}

void solve() {
    s[c] = '\0';
}

void output() {
    while (r--) {
        printf("%s\n", s);
    }
}

int main() {
    input();
    solve();
    output();
}
