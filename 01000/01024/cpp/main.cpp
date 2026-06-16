// https://www.acmicpc.net/problem/1024
// 수열의 합

#include <cstdio>

int main() {
    int n, l, p, t, len = 0;
    scanf("%d %d", &n, &l);

    for (int i = l; i <= 100; i++) {
        p = n - (i - 1) * i / 2;
        if (p < 0)
            break;
        if (p % i == 0 and p / i >= 0) {
            t = p / i;
            len = i;
            break;
        }
    }
    if (len)
        for (int i = 0; i < len; i++)
            printf("%d ", t + i);
    else
        printf("-1");
}
