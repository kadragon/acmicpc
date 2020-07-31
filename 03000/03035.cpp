// https://www.acmicpc.net/problem/3035
// 스캐너

#include <cstdio>

int r, c, zr, zc;
char s[51][51];

void input() {
    scanf("%d %d %d %d", &r, &c, &zr, &zc);
    for (int i = 0; i < r; i++)
        scanf("%s", s[i]);
}

void solve() {
    for (int i = 0; i < r * zr; i++, printf("\n"))
        for (int j = 0; j < c * zc; j++)
            printf("%c", s[i / zr][j / zc]);
}

int main() {
    input();
    solve();
}
