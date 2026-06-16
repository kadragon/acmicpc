// https://www.acmicpc.net/problem/16398
// 행성 연결

#include <cstdio>
#include <queue>

int n, d[1001][1001], visited[1001];
std::priority_queue<std::pair<int, int>> pq;
long long ans;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &d[i][j]);
            if (i == 1 and i != j)
                pq.push({-d[i][j], j});
        }

    visited[1] = 1;

    while (!pq.empty()) {
        int h = pq.top().second;
        int c = -pq.top().first;

        pq.pop();

        if (visited[h])
            continue;

        visited[h] = 1, ans += c;

        for (int i = 1; i <= n; i++) {
            if (i != h and !visited[i])
                pq.push({-d[h][i], i});
        }
    }

    printf("%lld", ans);
}
