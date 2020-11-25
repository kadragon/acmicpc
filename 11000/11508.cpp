// https://www.acmicpc.net/problem/11508
// 2+1 세일

#include <algorithm>
#include <cstdio>

int main() {
    int n, d[100001], a = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", d + i);

    std::sort(d, d + n);

    for (int i = n - 1, k = 0; i >= 0; i--) {
        if (k == 2) {
            k = 0;
            continue;
        }
        a += d[i];
        k++;
    }

    printf("%d", a);
}
