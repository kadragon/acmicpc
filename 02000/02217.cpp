// https://www.acmicpc.net/problem/2217
// 로프

#include <algorithm>
#include <cstdio>

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int n, d[100001], ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", d + i);

    std::sort(d, d + n, compare);

    for (int i = 0; i < n; i++)
        if (ans < d[i] * (i + 1))
            ans = d[i] * (i + 1);

    printf("%d", ans);
}
