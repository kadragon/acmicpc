// https://www.acmicpc.net/problem/2909
// 캔디 구매

#include <cstdio>

int main() {
    int c, k;
    scanf("%d %d", &c, &k);
    for (int i = 0; i < k - 1; i++)
        c /= 10;

    c = c / 10 + (c % 10 >= 5);

    for (int i = 0; i < k; i++)
        c *= 10;

    printf("%d", c);
}
