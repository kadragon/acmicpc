// https://www.acmicpc.net/problem/19637
// IF문 좀 대신 써줘

#include <cstdio>

int n, m, d[100001], t;
char od[100001][12];

int search(int a, int b, int k) {
    if (a > b)
        return -1;
    else if (a == b)
        return a;
    else if (b - a == 1) {
        return d[b] >= k ? a : b;
    }

    int t = (a + b) / 2;

    if (d[t] >= k)
        return search(a, t - 1, k);
    else
        return search(t, b, k);
}

int main() {
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
        scanf("%s %d", od[i], &d[i]);

    while (m--) {
        scanf("%d", &t);
        printf("%s\n", od[search(0, n, t) + 1]);
    }
}

/* 
 * http://www.cplusplus.com/reference/algorithm/lower_bound/
 */