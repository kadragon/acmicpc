// https://www.acmicpc.net/problem/14621
// 나만 안되는 연애

#include <cstdio>
#include <queue>
#include <vector>

std::vector<std::pair<int, int>> d[1001];
std::priority_queue<std::pair<int, int>> pq;

int n, m, visited[1001] = {0, 1}, ans;
char s[1001];

int main() {
    scanf("%d %d\n", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%c ", &s[i]);

    int a, b, c;
    while (m--) {
        scanf("%d %d %d", &a, &b, &c);
        if (s[a] != s[b]) {
            d[a].push_back({b, c});
            d[b].push_back({a, c});
        }
    }

    for (int i = 0; i < (int)d[1].size(); i++)
        pq.push({-d[1][i].second, d[1][i].first});

    n--;
    while (!pq.empty()) {
        int h = pq.top().second;
        int c = -pq.top().first;

        pq.pop();

        if (visited[h])
            continue;

        visited[h] = 1, ans += c, n--;

        for (int i = 0; i < (int)d[h].size(); i++)
            pq.push({-d[h][i].second, d[h][i].first});
    }

    printf("%d", n ? -1 : ans);
}
