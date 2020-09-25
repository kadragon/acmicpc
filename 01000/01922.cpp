// https://www.acmicpc.net/problem/1922
// 네트워크 연결

#include <cstdio>
#include <queue>
#include <vector>

std::vector<std::pair<int, int>> d[1001];
int n, m;

void input() {
    scanf("%d %d", &n, &m);
    int a, b, c;
    while (m--) {
        scanf("%d %d %d", &a, &b, &c);
        d[a].push_back({b, c});
        d[b].push_back({a, c});
    }
}

void solve() {
    int ans = 0, visited[1001] = {0};
    std::priority_queue<std::pair<int, int>> pq;

    for (int i = 0; i < (int)d[1].size(); i++)
        pq.push({-d[1][i].second, d[1][i].first});
    visited[1] = 1;

    while (!pq.empty()) {
        int h = pq.top().second;
        int h_c = -pq.top().first;

        pq.pop();

        if (visited[h])
            continue;

        visited[h] = 1;
        ans -= h_c;

        for (int i = 0; i < (int)d[h].size(); i++)
            pq.push({-d[h][i].second, d[h][i].first});
    }

    printf("%d", -ans);
}

int main() {
    input();
    solve();
}
