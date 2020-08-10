// https://www.acmicpc.net/problem/17264
// I AM IRONMAN

#include <cstdio>
#include <string.h>

int n, p, w, l, g, wp, e;
char win[1001][21];

void input() {
    scanf("%d %d %d %d %d", &n, &p, &w, &l, &g);

    char t;
    for (int i = 0; i < p; i++) {
        scanf("%s %c", win[wp], &t);
        if (t == 'W')
            wp++;
    }
}

void solve() {
    char st[21];
    int now = 0, win_p;
    while (n--) {
        win_p = 0;
        scanf("%s", st);
        for (int i = 0; i < wp; i++) {
            if (strcmp(st, win[i]) == 0)
                win_p = 1;
        }
        now = win_p ? now + w : now - l >= 0 ? now - l : 0;
        if (now >= g) {
            e = 1;
            break;
        }
    }
}

void output() {
    printf("I AM%s IRONMAN!!", e ? " NOT" : "");
}

int main() {
    input();
    solve();
    output();
}