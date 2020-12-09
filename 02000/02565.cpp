// https://www.acmicpc.net/problem/2565
// 전깃줄

#include <algorithm>
#include <cstdio>
#include <vector>

int n, d[101];
std::vector<std::pair<int, int>> p;

void input() {
    int a, b;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        p.push_back({a, b});
    }
}

void solve() {
    std::sort(p.begin(), p.end());

    for (int i = 1; i <= n; i++)
        d[i] = 1000;

    int l = 0, t;
    for (int i = 0; i < n; i++) {
        t = p[i].second;
        for (int j = 1; j <= l + 1; j++)
            if (t < d[j]) {
                d[j] = t;
                if (j > l)
                    l++;
                break;
            }
    }
    printf("%d", n - l);
}

int main() {
    input();
    solve();
}
