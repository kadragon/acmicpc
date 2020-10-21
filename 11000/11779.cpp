// https://www.acmicpc.net/problem/11779
// 최소비용 구하기 2

#include <cstdio>
#include <queue>
#include <stack>
#include <vector>

int n, m, s, e, pre[1001];
std::vector<std::pair<int, int>> v[1001];
std::vector<int> dist(1001, 987654321);

void input() {
    scanf("%d %d", &n, &m);
    int x, y, k;
    while (m--) {
        scanf("%d %d %d", &x, &y, &k);
        v[x].push_back({y, k});
    }
    scanf("%d %d", &s, &e);
}

void solve() {
    int h, c, t, cc;

    dist[s] = 0;

    std::priority_queue<std::pair<int, int>> pq;
    pq.push({0, s});

    while (!pq.empty()) {
        h = pq.top().second;
        c = -pq.top().first;

        pq.pop();

        if (dist[h] < c)
            continue;

        for (int i = 0; i < (int)v[h].size(); i++) {
            t = v[h][i].first, cc = dist[h] + v[h][i].second;
            if (dist[t] > cc) {
                pre[t] = h;
                dist[t] = cc;
                pq.push({-cc, t});
            }
        }
    }
}

void output() {
    std::stack<int> st;

    printf("%d\n", dist[e]);

    st.push(e);
    while (e != s) {
        e = pre[e];
        st.push(e);
    }
    printf("%d\n", (int)st.size());

    while (!st.empty()) {
        printf("%d ", st.top());
        st.pop();
    }
}

int main() {
    input();
    solve();
    output();
}
