// https://www.acmicpc.net/problem/14650
// 걷다보니 신천역 삼 (Small)

#include <cstdio>

int n, p;

void f(int a, int k) {
    if (k == n) {
        if (a % 3 == 0)
            p++;
        return;
    }

    for (int i = 0; i < 3; i++) {
        if (a == 0 and i == 0)
            continue;
        f(a * 10 + i, k + 1);
    }
}

int main() {
    scanf("%d", &n);
    f(0, 0);
    printf("%d", p);
}
