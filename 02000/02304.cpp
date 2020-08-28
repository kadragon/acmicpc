// https://www.acmicpc.net/problem/2304
// 창고 다각형

#include <algorithm>
#include <cstdio>
#include <deque>

std::deque<std::pair<int, int>> v;

int n, d[1001];

bool compare(std::pair<int, int> a, std::pair<int, int> b) {
    return a.second == b.second ? a.first < b.first : a.second > b.second;
}

void input() {
    scanf("%d", &n);
    int x, y;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        v.push_back({x, y});
    }

    std::sort(v.begin(), v.end(), compare);
}

void solve() {
    int pre_idx = v[0].first, ans = v[0].second;
    d[pre_idx] = 1;
    v.pop_front();
    while (!v.empty()) {
        if (d[v[0].first]) {
            v.pop_front();
            continue;
        }

        int a, b;
        if (pre_idx < v[0].first)
            a = pre_idx + 1, b = v[0].first;
        else
            b = pre_idx, a = v[0].first;

        for (int i = a; i <= b; i++)
            if (d[i] == 0) {
                ans += v[0].second;
                d[i] = 1;
            }
        v.pop_front();
    }
    printf("%d", ans);
}

int main() {
    input();
    solve();
}
