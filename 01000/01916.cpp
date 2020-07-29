// https://www.acmicpc.net/problem/1916
// 최소비용 구하기

#define INF 987654321

#include <cstdio>
int n, m, s, e, c, map[1002][1002], dist[1002];
bool visited[1002];

void dijkstra() {
    for (int i = 1; i <= n; i++)
        dist[i] = map[s][i];
    int cnt = n, v = s;
    visited[v] = true;

    while (cnt--) {
        int min_dist = INF;
        for (int i = 1; i <= n; i++) {
            if (!visited[i] && min_dist > dist[i]) {
                v = i;
                min_dist = dist[i];
            }
        }
        for (int i = 1; i <= n; i++) {
            if (visited[i] or map[v][i] == INF)
                continue;
            if (dist[v] + map[v][i] < dist[i])
                dist[i] = dist[v] + map[v][i];
        }
        visited[v] = true;
    }
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            map[i][j] = i == j ? 0 : INF;
        dist[i] = INF;
    }

    while (m--) {
        scanf("%d %d %d", &s, &e, &c);
        if (map[s][e] > c)
            map[s][e] = c;
    }

    scanf("%d %d", &s, &e);

    dijkstra();
    printf("%d", dist[e]);
}