// https://www.acmicpc.net/problem/2056
// 작업

#include <cstdio>
#include <queue>
#include <vector>

std::queue<int> q;
std::vector<int> v[10001];

int n, cost[10001], p, t, de[10001], ans[10001], max;

int main() {
    scanf("%d\n", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d %d", cost + i, &p);
        while (p--) {
            scanf("%d", &t);
            v[t].push_back(i), de[i]++;
        }
    }

    for (int i = 1; i <= n; i++)
        if (!de[i])
            q.push(i), ans[i] = cost[i];

    while (!q.empty()) {
        int h = q.front();
        q.pop();

        if (max < ans[h])
            max = ans[h];

        for (int i = 0; i < (int)v[h].size(); i++) {
            t = v[h][i];
            if (ans[t] < ans[h] + cost[t])
                ans[t] = ans[h] + cost[t];
            if (!--de[t])
                q.push(t);
        }
    }
    printf("%d", max);
}
