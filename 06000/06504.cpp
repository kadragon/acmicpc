// https://www.acmicpc.net/problem/6504
// 킬로미터를 마일로

#include <cstdio>

int main() {
    int t, f[22] = {0, 1, 2};
    for (int i = 3; i < 22; i++)
        f[i] = f[i - 1] + f[i - 2];

    scanf("%d", &t);
    while (t--) {
        int n, c = 0;
        scanf("%d", &n);
        for (int i = 21; i > 0 and n; i--)
            if (n >= f[i])
                c += f[i - 1], n -= f[i];

        printf("%d\n", c);
    }
}
