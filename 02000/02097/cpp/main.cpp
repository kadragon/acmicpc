// https://www.acmicpc.net/problem/2097
// 조약돌

#include <cstdio>
#include <math.h>

int main() {
    int n, t;
    scanf("%d", &n);

    if (n < 3) {
        printf("%d", 4);
        return 0;
    }
    t = sqrt(n);
    if (n > t * t)
        t++;

    printf("%d", 2 * (t - 1 + (n / t + (n % t == 0 ? 0 : 1) - 1)));
}