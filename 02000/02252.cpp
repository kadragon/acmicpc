// https://www.acmicpc.net/problem/2252
// 줄 세우기

#include <cstdio>
#include <queue>
#include <vector>

int n, m, de[32001];
std::vector<int> v[32001];
std::queue<int> q;

void input() {
    scanf("%d %d", &n, &m);
    int x, y;
    while (m--) {
        scanf("%d %d", &x, &y);
        v[x].push_back(y), de[y]++;
    }
}

void solve() {
    for (int i = 1; i <= n; i++)
        if (!de[i])
            q.push(i);

    while (!q.empty()) {
        int h = q.front();
        q.pop();

        printf("%d ", h);

        for (int i = 0; i < (int)v[h].size(); i++) {
            if (!--de[v[h][i]])
                q.push(v[h][i]);
        }
    }
}

int main() {
    input();
    solve();
}
