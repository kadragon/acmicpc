// https://www.acmicpc.net/problem/5949
// Adding Commas

#include <cstdio>

void solve(int k) {
    int t = k / 1000;
    if (t > 0) {
        solve(t);
        printf(",");
    }
    if (t > 0)
        printf("%03d", k % 1000);
    else
        printf("%d", k % 1000);
}

int main() {
    long long n;
    scanf("%lld", &n);
    solve(n);
}
