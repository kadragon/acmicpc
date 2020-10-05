// https://www.acmicpc.net/problem/13905
// 세부

#include <cstdio>
#include <queue>
#include <vector>

std::vector<std::pair<int, int>> d[100001];
std::priority_queue<std::pair<int, int>> pq;
int n, m, s, e, a, b, k, min = 1000001;
bool visited[100001];

int main() {
    scanf("%d %d %d %d", &n, &m, &s, &e);
    while (m--) {
        scanf("%d %d %d", &a, &b, &k);
        d[a].push_back({b, k});
        d[b].push_back({a, k});
    }

    for (int i = 0; i < (int)d[s].size(); i++)
        pq.push({d[s][i].second, d[s][i].first});

    visited[s] = 1;

    while (!pq.empty()) {
        int h = pq.top().second;
        int c = pq.top().first;

        pq.pop();

        if (visited[h])
            continue;

        visited[h] = 1;
        if (min > c)
            min = c;

        if (h == e)
            break;

        for (int i = 0; i < (int)d[h].size(); i++)
            if (!visited[d[h][i].first])
                pq.push({d[h][i].second, d[h][i].first});
    }

    printf("%d", visited[e] ? min : 0);
}