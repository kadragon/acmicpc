// https://www.acmicpc.net/problem/4084
// Viva la Diferencia

#include <cstdio>

int d[4];

int cal(int a, int b) {
    return d[a] > d[b] ? d[a] - d[b] : d[b] - d[a];
}

void solve() {
    int a = 0, t[4];
    while (!(d[0] == d[1] && d[1] == d[2] && d[2] == d[3])) {
        t[0] = cal(0, 1), t[1] = cal(1, 2), t[2] = cal(2, 3), t[3] = cal(3, 0);
        d[0] = t[0], d[1] = t[1], d[2] = t[2], d[3] = t[3];
        a++;
    }
    printf("%d\n", a);
}

int main() {
    while (true) {
        scanf("%d %d %d %d", d, d + 1, d + 2, d + 3);
        if (!d[0] && !d[1] && !d[2] && !d[3])
            break;
        solve();
    }
}
