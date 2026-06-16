// https://www.acmicpc.net/problem/1516
// 게임 개발

#include <cstdio>
#include <queue>
#include <vector>

int main() {
    int n, cost[501], ans[501] = {0}, t, in[501] = {0};
    std::vector<int> v[501], o;
    std::queue<int> qu;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", cost + i);
        while (true) {
            scanf("%d", &t);
            if (t == -1)
                break;
            v[t].push_back(i);
            in[i]++;
        }

        if (!in[i])
            qu.push(i), ans[i] = cost[i];
    }

    while (!qu.empty()) {
        int h = qu.front();
        qu.pop();
        o.push_back(h);

        for (int i = 0; i < (int)v[h].size(); i++) {
            if (ans[v[h][i]] < ans[h] + cost[v[h][i]])
                ans[v[h][i]] = ans[h] + cost[v[h][i]];
            if (!--in[v[h][i]])
                qu.push(v[h][i]);
        }
    }

    for (int i = 1; i <= n; i++)
        printf("%d\n", ans[i]);
}
