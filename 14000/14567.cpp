// https://www.acmicpc.net/problem/14567
// 선수과목 (Prerequisite)

#include <cstdio>
#include <queue>
#include <vector>

std::vector<int> v[1001];
std::queue<std::pair<int, int>> q;

int n, m, x, y, de[1001], ans[1001];

int main() {
    scanf("%d %d", &n, &m);
    while (m--) {
        scanf("%d %d", &x, &y);
        de[y]++, v[x].push_back(y);
    }

    for (int i = 1; i <= n; i++)
        if (!de[i])
            q.push({i, 1});

    while (!q.empty()) {
        int h = q.front().first;
        int d = q.front().second;
        q.pop();

        ans[h] = d;

        for (int i = 0; i < (int)v[h].size(); i++)
            if (!--de[v[h][i]])
                q.push({v[h][i], d + 1});
    }

    for (int i = 1; i <= n; i++)
        printf("%d ", ans[i]);
}
