// https://www.acmicpc.net/problem/18352
// 특정 거리의 도시 찾기

#include <algorithm>
#include <cstdio>
#include <queue>
#include <vector>

int n, m, k, x;
std::vector<int> v[300001], ans;
std::priority_queue<std::pair<int, int>> pq;
bool visited[300001];

void input() {
    scanf("%d %d %d %d", &n, &m, &k, &x);

    int s, e;
    while (m--) {
        scanf("%d %d", &s, &e);
        v[s].push_back(e);
    }
}

void solve() {
    visited[x] = 1;
    for (int i = 0; i < (int)v[x].size(); i++)
        pq.push({-1, v[x][i]});

    while (!pq.empty()) {
        int h = pq.top().second;
        int c = -pq.top().first;
        pq.pop();

        if (visited[h] or c > k)
            continue;

        visited[h] = 1;
        if (c == k) {
            ans.push_back(h);
            continue;
        }

        for (int i = 0; i < (int)v[h].size(); i++) {
            if (!visited[v[h][i]])
                pq.push({-(c + 1), v[h][i]});
        }
    }
}

void output() {
    if (ans.size()) {
        std::sort(ans.begin(), ans.end());
        for (int i = 0; i < (int)ans.size(); i++)
            printf("%d\n", ans[i]);
    } else
        printf("-1");
}

int main() {
    input();
    solve();
    output();
}
