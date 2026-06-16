// https://www.acmicpc.net/problem/1647
// 도시 분할 계획

#include <cstdio>
#include <queue>
#include <vector>

int main() {
    int v, e, ans = 0, max = 0;
    scanf("%d %d", &v, &e);
    std::vector<std::pair<int, int>> d[100001];
    std::priority_queue<std::pair<int, int>> pq;
    bool visited[100001] = {0};

    int a, b, c;
    for (int i = 0; i < e; i++) {
        scanf("%d %d %d", &a, &b, &c);
        d[a].push_back({b, c});
        d[b].push_back({a, c});
        if (a == 1) {
            pq.push({-c, b});
        }
    }

    visited[1] = 1;

    while (!pq.empty()) {
        int h = pq.top().second;
        int cost = -pq.top().first;

        pq.pop();

        if (visited[h])
            continue;

        ans += cost;
        if (max < cost)
            max = cost;

        visited[h] = 1;

        for (int i = 0; i < (int)d[h].size(); i++)
            pq.push({-d[h][i].second, d[h][i].first});
    }

    printf("%d", ans - max);
}
