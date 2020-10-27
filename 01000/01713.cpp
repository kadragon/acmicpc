// https://www.acmicpc.net/problem/1713
// 후보 추천하기

#include <cstdio>

int n, p[21][3], k, t, pc, f, q[101];

int main() {
    scanf("%d %d", &n, &k);
    for (int v = 1; v <= k; v++) {
        f = 0;
        scanf("%d", &t);
        for (int i = 1; i <= pc; i++) {
            if (p[i][0] == t) {
                p[i][1]++, f = 1;
                break;
            }
        }

        if (f)
            continue;

        if (n > pc) {
            pc++;
            p[pc][0] = t;
            p[pc][1] = 1;
            p[pc][2] = v;
            q[t] = 1;
        } else {
            int min = 1;
            for (int i = 2; i <= pc; i++) {
                if (p[min][1] > p[i][1] or (p[min][1] == p[i][1] and p[min][2] > p[i][2]))
                    min = i;
            }
            q[t] = 1, q[p[min][0]] = 0;
            p[min][0] = t;
            p[min][1] = 1;
            p[min][2] = v;
        }
    }

    for (int i = 1; i <= 100; i++)
        if (q[i])
            printf("%d ", i);
}
