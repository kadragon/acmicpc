// https://www.acmicpc.net/problem/2805
// 나무 자르기

#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

vector<int> d;

int main() {
    long long n, m, t, a = 0, k;
    scanf("%lld %lld", &n, &m);
    d.push_back(0);
    for (long long i = 0; i < n; i++) {
        scanf("%lld", &t);
        d.push_back(t);
    }

    sort(d.begin(), d.end());

    for (long long i = 1; a < m; i++) {
        t = i * (d[n - i + 1] - d[n - i]);
        a += t;
        k = d[n - i];
        if (a > m)
            k += (a - m) / i;
    }

    printf("%lld", k);
}