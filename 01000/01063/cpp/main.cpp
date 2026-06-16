// https://www.acmicpc.net/problem/1063
// 킹

#include <cstdio>

int main() {
    char c, d[3];
    int t;
    int king[2], stone[2], ma, mb, nxk, nyk, nxs, nys;

    scanf("%1c%1d ", &c, &t);
    king[0] = c - 'A' + 1, king[1] = t;

    scanf("%1c%1d ", &c, &t);
    stone[0] = c - 'A' + 1, stone[1] = t;

    scanf("%d", &t);
    while (t--) {
        ma = 0, mb = 0;
        scanf("%s", d);
        for (int i = 0; d[i]; i++) {
            switch (d[i]) {
            case 'R':
                ma++;
                break;
            case 'L':
                ma--;
                break;
            case 'B':
                mb--;
                break;
            case 'T':
                mb++;
                break;
            }
        }

        nxk = king[0] + ma, nyk = king[1] + mb;

        if (!nxk or !nyk or nxk > 8 or nyk > 8)
            continue;

        if (nxk == stone[0] and nyk == stone[1]) {
            nxs = stone[0] + ma;
            nys = stone[1] + mb;

            if (!nxs or !nys or nxs > 8 or nys > 8)
                continue;

            stone[0] = nxs, stone[1] = nys;
        }

        king[0] = nxk, king[1] = nyk;
    }

    printf("%c%d\n%c%d", king[0] + 'A' - 1, king[1], stone[0] + 'A' - 1, stone[1]);
}
