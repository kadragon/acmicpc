// https://www.acmicpc.net/problem/10423
// 전기가 부족해

#include <cstdio>
#include <queue>
#include <vector>

std::vector<std::pair<int, int>> d[1001];
std::priority_queue<std::pair<int, int>> pq;
int n, m, k, u, v, w, ans, visited[1001], p[1001];

int main() {
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 1; i <= k; i++) {
        scanf("%d", p + i);
        visited[p[i]] = 1;
    }

    while (m--) {
        scanf("%d %d %d", &u, &v, &w);
        d[u].push_back({v, w});
        d[v].push_back({u, w});
    }

    for (int i = 1; i <= k; i++) {
        for (int j = 0; j < (int)d[p[i]].size(); j++)
            pq.push({-d[p[i]][j].second, d[p[i]][j].first});
    }

    while (!pq.empty()) {
        int h = pq.top().second;
        int c = -pq.top().first;

        pq.pop();

        if (visited[h])
            continue;

        ans += c, visited[h] = 1;

        for (int i = 0; i < (int)d[h].size(); i++)
            if (!visited[d[h][i].first])
                pq.push({-d[h][i].second, d[h][i].first});
    }

    printf("%d", ans);
}
