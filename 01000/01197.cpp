// https://www.acmicpc.net/problem/1197
// 최소 스패닝 트리

#include <cstdio>
#include <queue>
#include <vector>

int main() {
    int v, e, ans = 0;
    scanf("%d %d", &v, &e);
    std::vector<std::pair<int, int>> d[10001];
    std::priority_queue<std::pair<int, int>> pq;
    bool visited[10001] = {0};

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
        visited[h] = 1;

        for (int i = 0; i < (int)d[h].size(); i++)
            pq.push({-d[h][i].second, d[h][i].first});
    }

    printf("%d\n", ans);

    for (int i = 1; i <= v; i++)
        printf("%d ", visited[i]);
}