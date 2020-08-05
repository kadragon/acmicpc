// https://www.acmicpc.net/problem/2224
// 명제 증명

#include <cstdio>

int n, d[52][52], a;

int atoi(char c) {
    return c <= 'Z' ? c - 'A' : c - 'a' + 26;
}

char itoc(int i) {
    return i < 26 ? 'A' + i : 'a' + i - 26;
}

void input() {
    char x, y;
    scanf("%d", &n);

    while (n--) {
        scanf(" %c => %c", &x, &y);
        d[atoi(x)][atoi(y)] = 1;
    }
}

void solve() {
    for (int k = 0; k < 52; k++)
        for (int i = 0; i < 52; i++)
            for (int j = 0; j < 52; j++) {
                if (i == j)
                    continue;
                if (d[i][k] and d[k][j])
                    d[i][j] = 1;
            }
}

void output() {
    for (int i = 0; i < 52; i++)
        for (int j = 0; j < 52; j++)
            if (d[i][j] and i != j)
                a++;

    printf("%d\n", a);

    for (int i = 0; i < 52; i++)
        for (int j = 0; j < 52; j++)
            if (d[i][j] and i != j)
                printf("%c => %c\n", itoc(i), itoc(j));
}

int main() {
    input();
    solve();
    output();
}
