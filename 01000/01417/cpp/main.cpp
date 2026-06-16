// https://www.acmicpc.net/problem/1417
// 국회의원 선거

#include <algorithm>
#include <cstdio>

int main() {
    int n, d[1001], a = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", d + i);

    if (n == 1) {
        printf("0");
        return 0;
    }

    std::sort(d + 1, d + n);

    while (d[0] <= d[n - 1]) {
        d[0]++, d[n - 1]--, a++;
        std::sort(d + 1, d + n);
    }

    printf("%d", a);
}
