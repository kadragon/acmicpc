// https://www.acmicpc.net/problem/13410
// 거꾸로 구구단

#include <cstdio>

int main() {
    int n, k, a, t, max = 0;
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= k; i++) {
        t = 0, a = n * i;

        while (a) {
            t *= 10;
            t += a % 10;
            a /= 10;
        }

        if (max < t)
            max = t;
    }

    printf("%d", max);
}
