// https://www.acmicpc.net/problem/1753
// 최단경로

#define INF 987654321

#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

int v, e, k;
vector<pair<int, int>> d[20001];
vector<int> dist(20001, INF);

void input() {
    scanf("%d %d %d", &v, &e, &k);
    int st, en, w;
    while (e--) {
        scanf("%d %d %d", &st, &en, &w);
        d[st].push_back({en, w});
    }
}

void dijkstra() {
    dist[k] = 0;

    priority_queue<pair<int, int>> pq;
    pq.push({0, k});

    while (!pq.empty()) {
        int c = -pq.top().first;
        int h = pq.top().second;

        pq.pop();

        if (dist[h] < c)
            continue;

        for (int i = 0; i < (int)d[h].size(); i++) {
            int en = d[h][i].first, w = d[h][i].second + dist[h];
            if (dist[en] > w) {
                dist[en] = w;
                pq.push({-w, en});
            }
        }
    }
}

void output() {
    for (int i = 1; i <= v; i++) {
        if (dist[i] == INF)
            printf("%s\n", "INF");
        else
            printf("%d\n", dist[i]);
    }
}

int main() {
    input();
    dijkstra();
    output();
}