// https://www.acmicpc.net/problem/2623
// 음악프로그램

#include <cstdio>
#include <queue>
#include <vector>

std::queue<int> q;
std::vector<int> v[1001], a;

int n, m, t, x, y, de[1001];

int main() {
    scanf("%d %d\n", &n, &m);
    while (m--) {
        scanf("%d ", &t);
        for (int i = 0; i < t; i++) {
            scanf("%d ", &y);
            if (i > 0)
                v[x].push_back(y), de[y]++;
            x = y;
        }
    }

    for (int i = 1; i <= n; i++)
        if (!de[i])
            q.push(i);

    while (!q.empty()) {
        int h = q.front();
        q.pop();

        a.push_back(h);

        for (int i = 0; i < (int)v[h].size(); i++)
            if (!--de[v[h][i]])
                q.push(v[h][i]);
    }

    if (a.size() == n)
        for (int i = 0; i < n; i++)
            printf("%d\n", a[i]);
    else
        printf("%d", 0);
}
