// https://www.acmicpc.net/problem/10282
// 해킹

#define INF 987654321

#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

int t, n, d, c;
vector<pair<int, int>> a[10001];
vector<int> dist(10001);

void input() {
    scanf("%d %d %d", &n, &d, &c);
    for (int i = 1; i <= n; i++) {
        a[i].clear();
        dist[i] = INF;
    }

    int x, y, cost;
    while (d--) {
        scanf("%d %d %d", &x, &y, &cost);
        a[y].push_back({x, cost});
    }
}

void solve() {
    dist[c] = 0;

    priority_queue<pair<int, int>> pq;
    pq.push({0, c});

    while (!pq.empty()) {
        int cost = -pq.top().first, start = pq.top().second;
        pq.pop();

        if (dist[start] < cost)
            continue;

        for (int i = 0; i < (int)a[start].size(); i++) {
            int end = a[start][i].first, len = a[start][i].second + dist[start];
            if (dist[end] > len) {
                dist[end] = len;
                pq.push({-len, end});
            }
        }
    }
}

void output() {
    int c = 0, max_cost = 0;
    for (int i = 1; i <= n; i++) {
        if (dist[i] != INF) {
            c++;
            if (max_cost < dist[i])
                max_cost = dist[i];
        }
    }
    printf("%d %d\n", c, max_cost);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        input();
        solve();
        output();
    }
}