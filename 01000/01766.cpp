// https://www.acmicpc.net/problem/1766
// 문제집

#include <cstdio>
#include <queue>
#include <vector>

std::priority_queue<int> q;
std::vector<int> v[32001];

int n, m, de[32001];

int main() {
    scanf("%d %d", &n, &m);
    int x, y;
    while (m--) {
        scanf("%d %d", &x, &y);
        v[x].push_back(y), de[y]++;
    }

    for (int i = 1; i <= n; i++)
        if (!de[i])
            q.push(-i);

    while (!q.empty()) {
        int h = -q.top();
        q.pop();

        printf("%d ", h);

        for (int i = 0; i < (int)v[h].size(); i++)
            if (!--de[v[h][i]])
                q.push(-v[h][i]);
    }
}
