// https://www.acmicpc.net/problem/12018
// Yonsei TOTO

#include <algorithm>
#include <cstdio>

int n, m, d[101], q[101], p, l, a, t;

int main() {
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p, &l);
        for (int j = 0; j < p; j++)
            scanf("%d", d + j);
        std::sort(d, d + p);
        q[i] = p - l > 0 ? d[p - l] : 1;
    }

    std::sort(q, q + n);

    for (int i = 0; i < n; i++) {
        t += q[i];
        if (t <= m)
            a++;
        else
            break;
    }

    printf("%d", a);
}
