// https://www.acmicpc.net/problem/2846
// 오르막길

#include <cstdio>

int main() {
    int n, d[1001], max_h = 0, s_h, t_h;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", d + i);
    d[n] = 0, s_h = d[0];

    for (int i = 1; i <= n; i++) {
        if (d[i] <= d[i - 1]) {
            t_h = d[i - 1] - s_h;
            if (max_h < t_h)
                max_h = t_h;
            s_h = d[i];
        }
    }
    printf("%d", max_h);
}
