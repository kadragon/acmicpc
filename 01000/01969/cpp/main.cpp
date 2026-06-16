// https://www.acmicpc.net/problem/1969
// DNA

#include <cstdio>

char s[1001][51];
char p[] = "ACGT";
int n, m, c[51][4], max[51], t;

int convert_c_to_i(char c) {
    for (int i = 0; i < 4; i++)
        if (p[i] == c)
            return i;
    return -1;
}

void input() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%s", s[i]);
}

void solve() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            t = convert_c_to_i(s[i][j]);
            c[j][t]++;
        }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 4; j++) {
            if (c[i][max[i]] < c[i][j])
                max[i] = j;
        }
    }
}

void output() {
    int ans = 0;
    for (int i = 0; i < m; i++) {
        printf("%c", p[max[i]]);
        ans += (n - c[i][max[i]]);
    }
    printf("\n%d", ans);
}

int main() {
    input();
    solve();
    output();
}
