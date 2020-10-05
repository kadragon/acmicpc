// https://www.acmicpc.net/problem/14950
// 정복자

#include <cstdio>
#include <queue>
#include <vector>

std::vector<std::pair<int, int>> d[10001];
std::priority_queue<std::pair<int, int>> pq;
int n, m, t, a, b, c, ans;
bool visited[10001] = {0, 1};

int main() {
    scanf("%d %d %d", &n, &m, &t);
    while (m--) {
        scanf("%d %d %d", &a, &b, &c);
        d[a].push_back({b, c});
        d[b].push_back({a, c});
    }

    for (int i = 0; i < (int)d[1].size(); i++)
        pq.push({-d[1][i].second, d[1][i].first});

    while (!pq.empty()) {
        int h = pq.top().second;
        int cost = -pq.top().first;

        pq.pop();

        if (visited[h])
            continue;

        ans += cost, visited[h] = 1;

        for (int i = 0; i < (int)d[h].size(); i++)
            if (!visited[d[h][i].first])
                pq.push({-d[h][i].second, d[h][i].first});
    }

    printf("%d", ans + (n - 1) * (n - 2) / 2 * t);
}