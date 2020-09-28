// https://www.acmicpc.net/problem/6497
// 전력난

#include <cstdio>
#include <queue>
#include <vector>

int main() {
    int m, n;
    while (true) {
        scanf("%d %d", &m, &n);
        if (!m and !n)
            break;

        int x, y, z, t = 0;
        std::vector<std::pair<int, int>> d[200001];
        std::priority_queue<std::pair<int, int>> pq;
        bool visited[200001] = {1};

        while (n--) {
            scanf("%d %d %d", &x, &y, &z);
            d[x].push_back({y, z});
            d[y].push_back({x, z});
            t += z;
            if (x == 0)
                pq.push({-z, y});
        }

        while (!pq.empty()) {
            int h = pq.top().second;
            int cost = -pq.top().first;

            pq.pop();

            if (visited[h])
                continue;

            visited[h] = 1;
            t -= cost;

            for (int i = 0; i < (int)d[h].size(); i++)
                pq.push({-d[h][i].second, d[h][i].first});
        }

        printf("%d\n", t);
    }
}
