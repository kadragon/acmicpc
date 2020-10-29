// https://www.acmicpc.net/problem/16953
// A → B

#include <cstdio>

long long a, b, ans;

void f(long long p, int k) {
    if (ans and k > ans)
        return;

    if (p > b)
        return;

    if (p == b) {
        if (!ans or ans > k)
            ans = k;
        return;
    }

    f(p * 2, k + 1);
    f(p * 10 + 1, k + 1);
}

int main() {
    scanf("%lld %lld", &a, &b);
    f(a, 1);

    printf("%lld", ans ? ans : -1);
}
