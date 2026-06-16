// https://www.acmicpc.net/problem/1368
// 물대기

#include <cstdio>
#include <queue>

std::priority_queue<std::pair<int, int>> pq;
int n, w, d[301][301], visited[301], ans;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &w);
        pq.push({-w, i});
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &d[i][j]);

    while (!pq.empty()) {
        int h = pq.top().second;
        int c = -pq.top().first;

        pq.pop();

        if (visited[h])
            continue;

        visited[h] = 1, ans += c;

        for (int i = 1; i <= n; i++) {
            if (i == h or visited[i])
                continue;
            pq.push({-d[h][i], i});
        }
    }

    printf("%d", ans);
}
