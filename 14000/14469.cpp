// https://www.acmicpc.net/problem/14469
// 소가 길을 건너간 이유 3

#include <algorithm>
#include <cstdio>
#include <vector>

int main() {
    int n, a = 0, x, y;
    std::vector<std::pair<int, int>> d;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        d.push_back({x, y});
    }

    std::sort(d.begin(), d.end());

    for (int i = 0; i < n; i++) {
        if (a < d[i].first)
            a = d[i].first;
        a += d[i].second;
    }
    printf("%d", a);
}
