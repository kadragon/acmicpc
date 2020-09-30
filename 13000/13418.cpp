// https://www.acmicpc.net/problem/13418
// 학교 탐방하기

#include <cstdio>
#include <queue>
#include <vector>

int main() {
    int n, m, visited[1001] = {1}, visited2[1001] = {1};
    std::vector<std::pair<int, int>> d[1001];
    std::priority_queue<std::pair<int, int>> pq, qp;

    scanf("%d %d", &n, &m);

    int a, b, c;
    for (int i = 0; i <= m; i++) {
        scanf("%d %d %d", &a, &b, &c);
        d[a].push_back({b, c ? 1 : 2});
        d[b].push_back({a, c ? 1 : 2});
    }

    int min = 0, max = 0;

    pq.push({-d[0][0].second, d[0][0].first});
    while (!pq.empty()) {
        int h = pq.top().second;
        int c = -pq.top().first;

        pq.pop();

        if (visited[h])
            continue;

        visited[h] = 1;
        min += c;

        for (int i = 0; i < (int)d[h].size(); i++)
            pq.push({-d[h][i].second, d[h][i].first});
    }

    qp.push({d[0][0].second, d[0][0].first});
    while (!qp.empty()) {
        int h = qp.top().second;
        int c = qp.top().first;

        qp.pop();

        if (visited2[h])
            continue;

        visited2[h] = 1;
        max += c;

        for (int i = 0; i < (int)d[h].size(); i++)
            qp.push({d[h][i].second, d[h][i].first});
    }

    max -= n, min -= n;
    printf("%d", max * max - min * min);
}
