// https://www.acmicpc.net/problem/1931
// 회의실배정

#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second == b.second ? a.first < b.first : a.second < b.second;
}

int main() {
    int n, x, y, p = 1, m = 0;
    scanf("%d", &n);

    vector<pair<int, int>> d;

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        d.push_back({x, y});
    }

    sort(d.begin(), d.end(), compare);
    m = d[0].second;

    for (int i = 1; i < d.size(); i++)
        if (d[i].first >= m)
            p++, m = d[i].second;

    printf("%d", p);
}