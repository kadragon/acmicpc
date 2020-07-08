// https://www.acmicpc.net/problem/10451
// 순열 사이클

#include <cstdio>

int main() {
    int t, n, d[1001], visited[1001], a, p, i;
    scanf("%d", &t);
    while (t--) {
        a = 0;
        scanf("%d", &n);
        for (i = 1; i <= n; i++) {
            scanf("%d", d + i);
            visited[i] = 0;
        }
        for (i = 1; i <= n; i++)
            if (!visited[i]) {
                visited[i] = 1, a++;
                p = i;
                while (p)
                    if (!visited[d[p]])
                        visited[d[p]] = 1, p = d[p];
                    else
                        p = 0;
            }

        printf("%d\n", a);
    }
}
