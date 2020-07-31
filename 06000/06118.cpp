// https://www.acmicpc.net/problem/6118
// 숨바꼭질

#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

int n, m;
vector<int> d[20001], dist(20001, 987654321);

void input() {
    scanf("%d %d", &n, &m);
    int x, y;
    while (m--) {
        scanf("%d %d", &x, &y);
        d[x].push_back(y);
        d[y].push_back(x);
    }
}

void solve() {
    int s, e;

    dist[1] = 0;

    priority_queue<int> pq;
    pq.push(1);

    while (!pq.empty()) {
        s = pq.top();
        pq.pop();

        for (int i = 0; i < (int)d[s].size(); i++) {
            e = d[s][i];
            if (dist[e] > dist[s] + 1) {
                dist[e] = dist[s] + 1;
                pq.push(e);
            }
        }
    }
}

void output() {
    int barn = 1, len = 0;
    for (int i = 2; i <= n; i++) {
        if (dist[barn] < dist[i]) {
            barn = i;
            len = 1;
        } else if (dist[barn] == dist[i])
            len++;
    }

    printf("%d %d %d", barn, dist[barn], len);
}

int main() {
    input();
    solve();
    output();
}