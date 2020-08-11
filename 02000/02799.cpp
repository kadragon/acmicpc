// https://www.acmicpc.net/problem/2799
// 블라인드

#include <cstdio>

int m, n, a[5];
char s[502][502];

void input() {
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m * 5 + 1; i++)
        scanf("%s", s[i]);
}

void solve() {
    int x, y;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            x = i * 5 + 1, y = j * 5 + 1;
            for (int k = 0; k < 5; k++)
                if (s[x + k][y] != '*') {
                    a[k]++;
                    break;
                }
        }
}

void output() {
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
}

int main() {
    input();
    solve();
    output();
}
